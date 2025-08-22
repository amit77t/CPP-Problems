#include<iostream>
#include<queue>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int> *l;
 public:
    Graph(int V)
    {
        this->V=V;
        l=new list<int> [V];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);

    }

    void print()
    {
        for(int u=0; u<V; u++)
        {
            
            cout<<u<<" : ";
            for(auto &v: l[u])
            {
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

    


    void dfsHelper(int u, vector<bool>& vis)
    {     vis[u]=true;
        cout<<u<<" ";
        list<int> neighbor=l[u];

        for(int v: neighbor)
        {
            if(!vis[v])
            {
                dfsHelper(v, vis);
            }
        }

    }

    void dfs()
    {  
        vector<bool> vis(7, false);
        
        dfsHelper(0, vis);

    }

    bool pathHelper(int src, int dest, vector<bool>& vis)
    {
        if(src==dest) return true;
        vis[src]=true;

         for(int v:l[src])
         {
            if(!vis[v])
            {
                if(pathHelper(v, dest, vis))
                {
                    return true;
                }
            }
         }
         return false;
    }
    bool hasPath(int src, int dest)
    {
        vector<bool> vis(V, false);
        return pathHelper(src, dest, vis);
    }
};


int main()
{

    Graph graph(7);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5); 
    graph.addEdge(4,5);
    graph.addEdge(5,6); 

    cout<<graph.hasPath(0,5);

    

    
   
    return 0;



}
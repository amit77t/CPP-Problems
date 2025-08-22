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
        vector<bool> vis(V, false);

        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
               dfsHelper(i, vis);
               cout<<endl;
            }
        }
        
       

    }
};


int main()
{

    Graph graph(10);

    graph.addEdge(0,2);
    graph.addEdge(2,5);
    graph.addEdge(1,6);
    graph.addEdge(6,4);
    graph.addEdge(4,3);
    graph.addEdge(4,9); 
    graph.addEdge(3,8);
    graph.addEdge(3,7); 

    graph.dfs();

    
   
    return 0;



}
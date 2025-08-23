#include<iostream>
#include<queue>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    bool isUndir;
 public:
    Graph(int V, bool isUndir=true)
    {
        this->V=V;
        l=new list<int> [V];
        this->isUndir=isUndir;
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        if(isUndir)
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

    


    bool cycleUndirectedHelper(int src, int par, vector<bool>&vis)
    {
           vis[src]=true;
           list<int> neighbour=l[src];
           
           for(int v:neighbour )
           {
            if(!vis[v])
            {
                if(cycleUndirectedHelper(v, src, vis))
                {
                    return true;
                }
            }
            else{
                if(v!=par)
                {
                    return true;
                }
            }
           }

           return false;
    }

    bool cycleUndirected()
    {
        vector<bool> vis(V, false);

        return cycleUndirectedHelper(0,-1, vis);

    } 
    bool isCycleDirHelper(int src, vector<bool>& vis, vector<bool>& recPath)
    {
        vis[src]=true;
        recPath[src]=true;
        for(int v: l[src])
        {
            if(!vis[v])
            {
                if(isCycleDirHelper(v, vis, recPath))
                {
                    return true;
                }
            }else{
                if(recPath[v])
                {
                    return true;
                }
            }
        }
        recPath[src]=false;
        return false;
    }

    bool isCycleDir()
    {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
               if( isCycleDirHelper(0, vis ,recPath))
                {
                    return true;
                }
            }
        }
        
    }
};


int main()
{

    Graph graph(4, false);

    graph.addEdge(1,0);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);
   
   
cout<<graph.isCycleDir();

    
   
    return 0;



}
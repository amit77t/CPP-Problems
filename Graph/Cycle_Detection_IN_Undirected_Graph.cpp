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
};


int main()
{

    Graph graph(5);

    graph.addEdge(1,0);
    graph.addEdge(1,2);
    graph.addEdge(2,0);
    graph.addEdge(0,3);
    graph.addEdge(3,4);
   
cout<<graph.cycleUndirected();

    
   
    return 0;



}
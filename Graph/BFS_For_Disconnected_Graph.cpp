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
            // list<pair<int, int>> neighbours=l[u];
            cout<<u<<" : ";
            for(auto &v: l[u])
            {
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

    void bfsHelper(int st, vector<bool>& vis)
    {
        queue<int> q;
       
        q.push(st);
        vis[st]=true;
        while(q.size()>0)
        {
            int u=q.front();
            q.pop();
            cout<<u<<" ";

            list<int> neighbour=l[u];
            for(int v: neighbour)
            {
                if(!vis[v])
                {
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    }

    void bfs()
    {
       vector<bool> vis(V, false);
       for(int i=0; i<V; i++)
       {
        if(!vis[i])
        {
            bfsHelper(i, vis);
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
    graph.addEdge(3,7);
    graph.addEdge(3,8); 
    graph.bfs();
   
    return 0;



}
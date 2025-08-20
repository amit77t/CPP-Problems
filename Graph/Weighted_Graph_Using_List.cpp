#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<pair<int, int>> *l;
 public:
    Graph(int V)
    {
        this->V=V;
        l=new list<pair<int, int>> [V];
    }

    void addEdge(int u, int v, int w)
    {
        l[u].push_back({v,w});
        l[v].push_back({u,w});

    }

    void print()
    {
        for(int u=0; u<V; u++)
        {
            // list<pair<int, int>> neighbours=l[u];
            cout<<u<<" : ";
            for(auto &v: l[u])
            {
                cout<<"{"<<v.first<<", "<<v.second<<"}";
            }
            cout<<endl;
        }
    }
};


int main()
{

    Graph graph(5);

    graph.addEdge(0,1,5);
    graph.addEdge(1,2,1);
    graph.addEdge(1,3,3);
    graph.addEdge(2,3,1);
     graph.addEdge(2,4,2);
    
    


   
    graph.print();
    return 0;



}
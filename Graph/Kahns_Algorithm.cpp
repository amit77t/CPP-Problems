#include<iostream>
#include<queue>
#include<list>
#include<stack>
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
   
    void calculateIndeg(vector<int>& indeg)
    {
        for(int u=0; u<V; u++)
        {
            for(int v: l[u])
            {
                indeg[v]++;
            }
        }
    }

    void topoSort()
    {
            vector<int> indeg(V,0);
            calculateIndeg(indeg);
            queue<int> q;
            for(int i=0; i<V; i++)
            {
                if(indeg[i]==0)
                {
                    q.push(i);
                }
            }


            while(q.size()>0)
            {
                int curr=q.front();
                q.pop();
                cout<<curr<<" ";
                for(int v: l[curr])
                {
                    indeg[v]--;
                    if(indeg[v]==0)
                    {
                        q.push(v);
                    }
                }
            }
    }
    



   
};


int main()
{

    Graph graph(6, false);

    graph.addEdge(5,0);
    graph.addEdge(5,2);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,1);
    graph.addEdge(4,0);
   
   
   
     cout<<"TopologicalSorting"<<endl;

     graph.topoSort();

    
   
    return 0;



}
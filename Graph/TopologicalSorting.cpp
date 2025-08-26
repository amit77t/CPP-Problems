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
    void topologicalSortHelper(int src, vector<bool>& vis, stack<int>& s)
    {
        vis[src]=true;

        for(int v: l[src])
        {
            if(!vis[v])
            {
                topologicalSortHelper(v, vis, s);
            }
        }

        s.push(src);
    }

    void topologicalSort()
    {
        vector<bool> vis(V, false);
        stack<int> s;

        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                topologicalSortHelper(i, vis, s);
            }
        }
     
        while(!s.empty())
        {
           
            
                cout<<s.top()<<" ";
                s.pop();
            
        
        }
            cout<<endl;


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
   
   
   
     graph.print();
     cout<<"TopologicalSorting"<<endl;

     graph.topologicalSort();

    
   
    return 0;



}
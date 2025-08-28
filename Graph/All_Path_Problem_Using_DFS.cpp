#include<iostream>
#include<queue>
#include<list>
#include<vector>
#include<string>
using namespace std;

class Graph{
    int V;
    list<int> *l;
     bool isUndir;
 public:
    Graph(int V,bool isUndir=true)
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

    


    void pathHelper(int src,int dest, vector<bool>& vis, string & path)
    {   if(src==dest)
        {
            cout<<path<<dest<<endl;
            return;
        }
          vis[src]=true;
          path+=to_string(src);
        
        list<int> neighbor=l[src];

        for(int v: neighbor)
        {
            if(!vis[v])
            {
                pathHelper(v,dest, vis, path);
            }

          
        }
          path=path.substr(0, path.size()-1);
            vis[src]=false;

    }

    void path(int src, int dest)
    {  
        vector<bool> vis(7, false);
        string path=" ";
        
        pathHelper(src,dest, vis, path);

    }
};


int main()
{

    Graph graph(6,false);

    graph.addEdge(0,3);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0); 
    graph.addEdge(5,2);
  

    graph.path(5,1);

    
   
    return 0;



}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<int> vec1;
     vector<int> vec2(10, -1);
     cout<<"vec1 size :"<< vec1.size()<< "\n";
     
     cout<<"vec2 size :"<<vec2.size()<<"\n";
     
     vec2.push_back(4);
     for(int i=0; i<vec2.size(); i++)
     {
        cout<< vec2[i]<< " ";
     }cout<<endl;

       cout<<"before vec2 capacity :"<<vec2.capacity()<<"\n";
      vec2.pop_back();
      cout<<"after vec2 capacity :"<<vec2.capacity()<<"\n";



     for(int i=0; i<vec2.size(); i++)
     {
        cout<< vec2[i]<< " ";
     }
     
   


    return 0;
}
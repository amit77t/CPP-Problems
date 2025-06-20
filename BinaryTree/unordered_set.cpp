#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10);

    if(s.find(10)==s.end())
    {
        cout<<"not found";
    }
    else{
        cout<<"found";
    }
    cout<<endl;
   cout<<s.size();
cout<<endl;
s.erase(20);
    for(int x: s)
    {
        cout<< x<<" ";
    }
    return 0;
}
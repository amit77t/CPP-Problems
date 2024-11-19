#include<iostream>
#include <algorithm>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec={2,8,4,9,11,6,1,5};
    

    cout<<"before sorting"<<"\n";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end());
    cout<<"after sorting "<<"\n";
      for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;

    
}
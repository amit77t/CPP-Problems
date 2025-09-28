#include<iostream>
#include<vector>
using namespace std;


void findCombi(int idx, int target, vector<int>& arr, vector<int>&ds)
{
    if(idx==arr.size())
    {
        if(target==0)
        {
            for(auto x : ds)
            {
                cout<<x<<" ";
            }
        }
        return ;
    }

    if(arr[idx]<= target)
    {
        ds.push_back(arr[idx]);
        findCombi(idx, target-arr[idx], arr, ds);
        ds.pop_back();
    }

    findCombi(idx+1, target, arr,  ds);
}




int main()
{
   vector<int> arr={2,3,6,7};
   int target=7;
   vector<int> ds;
 
  findCombi(0, target, arr, ds);
   
    return 0;

}
#include<iostream>
#include<vector>

using namespace std;
int singleNumber(vector<int>& arr)
{
         int ans=0;
         for(int i=0; i<arr.size(); i++)
         {
            ans=ans^arr[i];
         }

         return ans;
}

int main()
{
    vector<int> arr={2,2,1,3,3,1,5};
    cout<<singleNumber(arr)<<endl;
    return 0;
}
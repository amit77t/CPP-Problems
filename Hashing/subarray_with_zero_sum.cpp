#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool  isSumZero(vector<int> &arr)
{
   int n=arr.size();

   unordered_set<int> st;
   int pre_sum=0;

   for(int i=0; i<n; i++)
   {
      pre_sum+=arr[i];
      
      if(st.find(pre_sum) != st.end())
      {
        return true;
      }
      if(pre_sum==0)
      {
        return true;
      }
      st.insert(pre_sum);
   }
   return false;

}

int main()
{

    vector<int> arr={-3,4,-3,-1,1};
    cout<<isSumZero(arr);
    return 0;
}
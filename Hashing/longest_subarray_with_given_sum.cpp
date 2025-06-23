#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestSubarray(vector<int>& nums, int sum)
{       
    int n= nums.size();
      unordered_map<int, int> m;
      int res=0;
      int pre_sum=0;

      for(int i=0; i<n; i++)
      {
        pre_sum+=nums[i];
        if(pre_sum==sum)
        {
            res=i+1;
        }

        if(m.find(pre_sum)==m.end())
        {
            m.insert({pre_sum, i});
        }

        if(m.find(pre_sum-sum)!= m.end())
        {
            res=max(res, i-m[pre_sum-sum]);
        }
      }
      return res;
}



int main()
{  vector<int> arr = {10, 5, 2, 7, 1, -10};
int  k = 15;

cout<<longestSubarray(arr, k)<<endl;
return 0;

}
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countSubarraySum(vector<int>& arr, int k)
{          
    int n=arr.size();
    int preSum=0;
    int cnt=0;
        unordered_map<int, int> mp;
        for(int i=0; i<n ; i++)
        {
            preSum+=arr[i];

            int remove=preSum-k;

            cnt+=mp[remove];

            mp[preSum]++;
        }
        return cnt;
}


int main()
{ vector<int> nums = {1,1,1}; 
   int k = 2;

   cout<<countSubarraySum(nums, k);
   return 0;

}
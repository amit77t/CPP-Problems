#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int subArraySumDivisibleByK(vector<int>& nums, int k)
{
    int n=nums.size();
    unordered_map<int, long long> mp;
    mp[0]=1;
    long long curr=0;
    long long count=0;

    for(int i=0; i<n; i++)
    {
        curr+=nums[i];

        int mod=((curr%k)+k)%k;

        if(mp.find(mod)!=mp.end())
        {
            count+=mp[mod];
        }

        mp[mod]++;
    }

    return count;
}


int main()
{
     vector<int> nums = {4, 5, 0, -2, -3, 1};
    int K = 5;
    cout << subArraySumDivisibleByK(nums, K) << "\n"; 
    return 0;
}
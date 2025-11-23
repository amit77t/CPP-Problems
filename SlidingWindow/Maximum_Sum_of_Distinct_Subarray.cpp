#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

int maximumSumOfDistinctSubarrays(vector<int>& nums, int k)
{    

     unordered_map<int, int> mp;
      int n=nums.size();
      int i=0, j=0;
      int currSum=0, maxi=0;

      while(j<n)
      {
        currSum+=nums[i];
        mp[nums[j]]++;
        
        if(j-i+1==k)
        {
            if(mp.size()==k)
            {
                maxi=max(maxi, currSum);
            }
            
                currSum-=nums[i];
                mp[nums[i]]--;

            
            if(mp[nums[i]]==0)
            {
                mp.erase(nums[i]);
            }
            i++;
        }

        j++;

      }

      return maxi;
}

int main()
{  

    vector<int> nums={1,5,4,2,9,9,9};

    cout<<maximumSumOfDistinctSubarrays(nums, 3);


return 0;
}
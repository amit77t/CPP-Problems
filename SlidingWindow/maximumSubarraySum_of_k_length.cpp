#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int maximumSubarraySum(vector<int>& nums, int k)

{
      int i=0, j=0;
      int currSum=0, maxi=0;

      while(j<nums.size())
      {
          currSum+=nums[j];
          
          if(j-i+1 ==k)
          {
            maxi=max(maxi, currSum);

            currSum-=nums[i];
            i++;
          }
          j++;
      }
      return maxi;
}


int main()
{

    vector<int> nums={1, 4, 2, 10, 23, 3, 1, 0, 20};
    cout<<"maximum sum of a subarray of size k is : ";
    cout<<maximumSubarraySum(nums,4);
return 0;
}
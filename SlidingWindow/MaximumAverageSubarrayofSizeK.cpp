#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


float MaximumAverageSubarray(vector<int>& nums, int k)
{
    int n=nums.size();
    int i=0, j=0;
    float currSum=0, maxi=0;
    while(j<n)
    {
        currSum+=nums[j];

        if(j-i+1 ==k)
        {
            maxi=max(currSum, maxi);

            currSum-=nums[i];

            i++;

        }
        j++;
    }
    return maxi/k;


}

int main()
{
    vector<int> nums={1, 12, -5, -6, 50, 3};

    cout<<MaximumAverageSubarray(nums, 4);
return 0;
}
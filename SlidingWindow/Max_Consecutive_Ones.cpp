#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int MaxConsecutive(vector<int>& nums, int k)
{
    int i=0, j=0;
    int count=0, maxi=0;
    while(j<nums.size())
    {
        if(nums[j]==1)
        {
            count++;
        }

        if(j-i+1==k)
        {
            maxi=max(maxi, count);

            if(nums[i]==1)
            {
                count--;
                i++;
            }
            else{
                i++;
            }
        }
        j++;
    }
    return maxi;
}

int main()
{

    vector<int> nums = {1, 1, 0, 1, 1, 1, 0};
     
    cout<<MaxConsecutive(nums, 3);
return 0;
}
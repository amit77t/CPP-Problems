#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(vector<int>& nums, int k)
{
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i <= n - k; i++)       
    {
        int firstNeg = 0;

      
        for(int j = i; j < i + k; j++)
        {
            if(nums[j] < 0)
            {
                firstNeg = nums[j];
                break;
            }
        }

        ans.push_back(firstNeg);
    }

    return ans;
}

int main()
{
    vector<int> nums = {12, -1, -7, 8, 15, 30, 16, 28};

    vector<int> ans = solve(nums, 3);

    for(int x : ans)
    {
        
         cout<< x <<" ";
        
    }
        

    return 0;
}

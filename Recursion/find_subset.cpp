#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>& nums, vector<int>& arr, int idx)
{


    if(nums.size()== idx)
    {
        for(int x: arr){
            cout<<x<<" ";
        }
        return ;
    }

    arr.push_back(nums[idx]);

    subset(nums, arr, idx+1);

    arr.pop_back();

    subset(nums, arr, idx+1);
}

int main()
{
    vector<int> nums={1,2};

    vector<int> ans;

    subset(nums, ans, 0);
    return 0;
    
}
#include<iostream>
#include<vector>
using namespace std;

int minimumElement(vector<int>& nums)
{    int n=nums.size();
    int low=0;
    int high=n-1;
    int ans=INT8_MAX;
    while(low<= high)
    {
        int mid=low+(high-low)/2;

            if(nums[low]<=nums[mid])
            {
                ans=min(ans, nums[low]);
                low=mid+1;
            }
            else{
                ans=min(ans, nums[mid]);

                high=mid-1;
            }

    }
    return ans;
}




int main()
{
    vector<int> arr={3,4,5,1,2};
    cout<<minimumElement(arr);
    return 0;
}
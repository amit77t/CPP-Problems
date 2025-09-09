#include<iostream>
#include<vector>
using namespace std;

int minimumElement(vector<int>& nums)
{    int n=nums.size();
    int low=0;
    int high=n-1;
    int indx=-1;
    int ans=INT8_MAX;
    while(low<= high)
    {
        int mid=low+(high-low)/2;

            if(nums[low]<= nums[high])
            {
                if(nums[low]<ans)
                {
                    ans=nums[low];
                    indx=low;
                }
                break;

            }

            if(nums[low]<=nums[mid])
            {  if(nums[low]<ans)
                {
                    ans=nums[low];
                    indx=low;
                }
               
                low=mid+1;
            }
            else{
                 if(nums[mid]<ans)
                {
                    ans=nums[mid];
                    indx=mid;
                }
                high=mid-1;
            }

    }
    return indx;
}




int main()
{
    vector<int> arr={3,4,5,1,2};
    cout<<minimumElement(arr);
    return 0;
}
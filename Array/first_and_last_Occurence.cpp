#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>& nums, int target)
 {
    int n=nums.size();
    int s=0;
    int e=n-1;
    int first=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            first=mid;
            e=mid-1;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return first;
 }
 int lastOcc(vector<int>& nums, int target)
 {
    int n=nums.size();
    int s=0;
    int e=n-1;
    int last=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            last=mid;
            s=mid+1;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return last;
 }
     
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        int x=firstOcc(nums, target);
        if(x==-1)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;

        }
        int y=lastOcc(nums, target);

        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }

 int main()
 {
    vector<int> nums = {5,7,7,8,8,10};
    int  target = 8;
   vector<int> ans = searchRange(nums, target);

    cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i != ans.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    
    return 0;
 }   
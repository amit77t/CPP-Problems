#include<iostream>
#include<vector>
using namespace std;


int findMissing(vector<int>& nums)
{
    int ans=nums.size();

    for(int i=0; i<nums.size(); i++)
    {
          ans=ans^i;
          ans=ans^nums[i];

    }
    return ans;
}
int main()
{  

    vector<int> nums={0,1,3,4};

     cout<<"MISSING NUMBER IS \n";
    cout<<findMissing(nums)<<endl;
return 0;
}
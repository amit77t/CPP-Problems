// #include<iostream>
#include <bits/stdc++.h>

using namespace std;

bool duplicate(vector<int>   &nums)
{
    sort(nums.begin(), nums.end());
    
    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i-1]== nums[i])
        {
            return true;
        }
    }

    return false;

}


int main()
{
  vector<int> nums={1,3,4,4,4};

  cout<< (duplicate(nums) ? "True":"False") <<endl;  
  return 0;


}
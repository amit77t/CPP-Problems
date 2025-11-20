#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int CountWithSum(vector<int>& nums, int k, int threshold)
{
    int i=0, j=0;
    int currSum=0, count=0;

    while(j< nums.size())
    {
         currSum+=nums[j];
         if(j-i+1==k)
         {
            if(currSum< threshold)
            {
                count++;
            }

            currSum-=nums[i];
            i++;


         }
         j++;
    }
    return count;


}

int main()
{ 
   vector<int> nums = {1, 2, 3, 4, 5};
int k = 2;
 int threshold = 7;
 cout<<CountWithSum(nums, k, threshold);


 return 0;
}
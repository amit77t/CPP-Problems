#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool subArraySum(vector<int> &nums, int sum)
{
    int n=nums.size();

   
    int preSum=0;
    unordered_set<int> st;

    for(int i=0; i< n ; i++)
    {
        preSum+=nums[i];

        if(preSum==sum)
        {
            return true;
        }

        if(st.find(preSum-sum)!= st.end())
        {
            return true;
        }

        st.insert(preSum);
    }
    return false;
}




int main()
{
 vector<int> arr = {10, 2, -2, -20, 10};
 int  k = -10;
cout<< subArraySum(arr, k)<<endl;
return 0;

}
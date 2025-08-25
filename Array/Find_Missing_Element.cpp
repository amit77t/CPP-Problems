#include<iostream>
#include<vector>
using namespace  std;

int missingNumber(vector<int>& nums) {

        int n=nums.size();
      vector<int> hash(n+1, 0); 
        for(int i=0; i<n; i++)
        {
            hash[nums[i]]++;
        }

        for(int i=0; i<=n; i++)
        {
             if(hash[i]==0)
             {
                return i;
             }
        }
        return -1;
    }

int main()
{
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    cout<<missingNumber(arr)<<endl;
    return 0;

}
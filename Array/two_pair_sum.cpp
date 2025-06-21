#include<iostream>
#include<vector>
using namespace std;
 bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((arr[i]+arr[j])== target)
                {
                    return true;
                }
            }
        }

        return false;
    }

int main()
{
    vector<int> arr={3,2,8,1,-8};

    cout<<twoSum(arr, 17);

}
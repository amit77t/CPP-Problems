#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


bool twoSum(vector<int>& arr, int target) {
       
      int n=arr.size();
//         
        unordered_set<int> st;
        
        for(int i=0; i<n; i++)
        {
            if(st.find(target-arr[i])!=st.end())
            {
                return true;
            }
            else{
                st.insert(arr[i]);
            }
        }
        
        return false;
        
    }
    int main()
{
    vector<int> arr={3,2,8,15,-8};

    cout<<twoSum(arr, 17);

}
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void subsetSum(vector<int> &arr, vector<int> &ans, int idx, int sum)
{
    if(idx==arr.size())
    {
        ans.push_back(sum);
        return;
    }
    

    subsetSum(arr, ans, idx+1, sum+arr[idx]);
    subsetSum(arr, ans, idx+1, sum);
    

}
int main()
{
    vector<int> arr={3,1,2};
    int sum=0;
    int idx=0;
    vector<int> ans;
    subsetSum(arr,ans, 0, 0 );
    sort(ans.begin() ,ans.end());
    for(auto x: ans)
    {
        cout<<x<<" ";
    }

}
#include<iostream>
#include<vector>
using namespace std;
bool subArrayWithGivenSum(vector<int>& arr, int sum)
{
    int s=0;
    int curr=0;

    for(int e=0; e<arr.size(); e++)
    {
        curr+=arr[e];
        while(sum<curr)
        {
            curr-=arr[s];
            s++;
        }
        if(curr==sum)
        {
            return true;
        }

    }
    return false;
}

int main()
{
    vector<int> arr={1,4,20,3,10,5};
    int sum=33;

    cout<<subArrayWithGivenSum(arr, sum);
  return 0;
}

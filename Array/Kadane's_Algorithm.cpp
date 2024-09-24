#include<iostream>

#include<algorithm>
using namespace std;
void maxSub_arraySum(int arr[], int n)
{
  int maxSum=INT16_MIN ;
  int currSum=0;
  for(int s=0; s<n ; s++)
  {
    currSum+=arr[s];
    maxSum=max(currSum ,maxSum);
    if(currSum<0)
    {
        currSum=0;
    }
  }
  cout<<"The max subarray is "<<maxSum<<endl;
}

int main()
{
 int arr[]={2,-3,6,-5,4,2};
  int n=sizeof(arr)/sizeof(int);
 

 maxSub_arraySum(arr, n);
 return 0;
}
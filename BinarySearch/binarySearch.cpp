#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int target)
{
    int n=arr.size();
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        {
            return mid;
        }

        if(target> arr[mid])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}


int main()
{
  
   vector<int> arr={3,4,5,6,7,8,9};
   cout<<binarySearch(arr,5);
   
    return 0;
}
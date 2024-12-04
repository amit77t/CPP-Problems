#include<iostream>
using namespace std;

bool checkArrSorted(int arr[], int n, int i)
{
    if(i==n-1)
    {
        return true;
    }
    if(arr[i]>arr[i+1])
    {
        return false;
    }

    return checkArrSorted(arr, n, i+1);
}
int main()
{
    int arr[5]={1,2,3,4,5};

    cout<<checkArrSorted(arr, 5, 0)<<endl;
    return 0;
}
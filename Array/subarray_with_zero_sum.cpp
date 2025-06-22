#include<iostream>
using namespace std;

bool subArrayZeroSum(int arr[], int n)
{  
 
    for(int i=0; i<n ; i++)
    {
       int sum=0;
        for(int j=i; j<n ; j++)
        {
            sum+=arr[i];
            if(sum==0)
            {
                return true;
            }
        }
    }
    return false;
}



int main()
{
    int arr[]={4,-3,2,1};
    int size=4;

    cout<<subArrayZeroSum(arr, size);
    return 0;
}
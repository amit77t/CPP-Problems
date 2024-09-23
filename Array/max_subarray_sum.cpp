#include<iostream>
#include<math.h>
using namespace std;

void max_sub_array_sum(int arr[], int n)
{


    int maxSum=INT8_MIN;
   for(int s=0; s<n ; s++)
   {
    for(int e=s; e<n ;e++)
    {  int currSum=0;
        for(int i=s; i<=e; i++)
        {
         currSum+=arr[i];  
         maxSum=max(maxSum, currSum);
        }
        cout<<currSum<<", ";
    }
    cout<<endl;

   }
   cout<<"max is = "<<maxSum<<endl;

}

int main()
{
  int arr[]={2,-3,6,-5,4,2};
  int n=sizeof(arr)/sizeof(int);
 

 max_sub_array_sum(arr, n);







 return 0;

}
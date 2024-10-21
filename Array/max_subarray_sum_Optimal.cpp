#include<iostream>
#include<math.h>
using namespace std;

void max_sub_array_sum(int arr[], int n)
{


    int maxSum=INT16_MIN;
   for(int s=0; s<n ; s++)
   {    int currSum=0;
      for(int e=s; e<n ;e++)
    {  
       
         currSum+=arr[e];  
         maxSum=max(maxSum, currSum);
    }    
       
   }  


 


}

int main()
{
  int arr[]={2,-3,6,-5,4,2};
  int n=sizeof(arr)/sizeof(int);
 

 max_sub_array_sum(arr, n);







 return 0;

}
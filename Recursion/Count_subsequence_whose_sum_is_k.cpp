#include<iostream>
#include<vector>
#include<string>
using namespace std;

int print(int arr[], int sum, int key,int idx ,int n)
{
        if(idx==n)
        {
            if(sum==key)
            {
               return 1;
            }
            
        
            return 0;
        }

        
        sum+=arr[idx];
       int left= print(arr,  sum, key, idx+1, n);
        sum-=arr[idx];
       
        int right=print(arr, sum, key,  idx+1, n);
  return left+right;
} 

int main()
{
    int arr[4]={1,2,1};
    
    

   cout <<print(arr, 0, 2, 0, 3);
}
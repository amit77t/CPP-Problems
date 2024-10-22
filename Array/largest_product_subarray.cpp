#include<iostream>
using namespace std;

int maxProd(int *arr, int n)
{  int result=arr[0];
    for(int s=0; s<n ; s++)
    {
        int currProd=1;
        for(int e=s; e<n; e++)
        {
            currProd=currProd*arr[e];
            result=max(currProd, result);
        }
    }

    return result;
}

int main()
{
int arr[]={-2,0,-1};
  int n=sizeof(arr)/sizeof(int);


  cout<<maxProd(arr, n)<<endl;

  return 0;
 

 
}
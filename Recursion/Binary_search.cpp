#include<iostream>
using namespace std ;

int binarySearch(int arr[], int s, int e  ,int key )
{
   

    if(s>e)
    {
        return -1;
    }

    int mid= (s+e)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if( arr[mid]>key)
    {
        return binarySearch(arr, s, mid-1, key);
    }
    else{
       return binarySearch(arr, mid+1, e, key);
    }
}


int main()
{
  int arr[]={1,2,3,4,5,6,7};
  int n=sizeof(arr)/sizeof(int);
  int s=0, e=n-1;
  cout<< binarySearch(arr, s, e, 7) ;
  return 0;
   
}
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
   for(int i=0; i<n; i++)
   {  int curr=arr[i];
      int prev=i-1;
     while(prev>=0 && arr[prev]>curr)
     {
        swap(arr[prev], arr[prev+1]);
        prev--;
     }
      arr[prev+1]=curr;
   }
  
  for(int i=0; i<n; i++)
  {
    cout<< arr[i] <<" ";
  }

}


int main()
{
    int arr[]={2,9,1,5,3};
    int size=sizeof(arr)/sizeof(int);

    insertionSort(arr, size);

    return 0;
}
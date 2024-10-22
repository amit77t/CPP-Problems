#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
   for(int i=0; i<n-1; i++)
   {  int minIdx=i;
     for(int j=i+1; j<n; j++)
     {
        if(arr[j]<arr[minIdx])
        { 
            minIdx=j;
           
        }
     }
      swap(arr[i], arr[minIdx]);
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

    selectionSort(arr, size);

    return 0;
}
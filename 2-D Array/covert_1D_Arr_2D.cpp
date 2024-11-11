#include<iostream>
using namespace std;

void oneDtoTwoD(int *arr[] , int m, int n )
{ 
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    
}




int main()
{
  int arr[]={1,2,3,4};
  int size=sizeof(arr)/sizeof(int);
  int m=1;
  int n=3;
  
  oneDtoTwoD(arr, m , n);
  return 0;

}
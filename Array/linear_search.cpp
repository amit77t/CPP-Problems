#include<iostream>
using namespace std;


int linerSearch(int *arr, int n, int key)
{
   for(int i=0; i<n ; i++)
   {
     if(arr[i]==key)
     {
        return i;
     }
   }
   return -1;

}


int main()
{
    int arr[]={3, 6, 8, 10, 45, 67};
    int n=sizeof(arr)/sizeof(int);
    


    cout<<linerSearch(arr, n, 455);

    return 0;
}
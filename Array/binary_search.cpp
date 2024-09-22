#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int st=0;
    int end=size-1;

    while(st<=end)
    {
     int mid=(st+end)/2;

     if(arr[mid]==key)
     {
        return mid;
     }

     else if(arr[mid]<key)
     {
         st=mid+1;
     }
     else{
        st=mid-1;
     }
     
    
    }
    return -1;
}


int main()
{

    int arr[]={2,4,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    

    cout<< binarySearch(arr, size, 9)<<endl;
    return 0;

}
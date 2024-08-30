#include<iostream>
using namespace std;
 
void reverse(int *arr, int n)
{
    int s=0; int e=n-1;

    while(s<e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    reverse(arr, n);
    return 0;


}
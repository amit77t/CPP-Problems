#include<iostream>
using namespace std;

int main()
{
    int arr[10];
  
    int size= sizeof(arr)/sizeof(int);

    for(int i=0; i< size; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";

    }

return 0;

}
#include<iostream>
using namespace std;


bool isSorted(int arr[], int n)
{
    for(int i=1; i<=n ; i++)
    {
        if(arr[i]< arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int arr[5]={5,12 ,30, 35,56};

    cout<<isSorted(arr, 5);

    return 0;

}
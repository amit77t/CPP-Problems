#include<iostream>
#include<vector>
using namespace std;

void reverse(int arr[], int n)
{
    int st=0;
    int end=n-1;

    while(st<end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    for(int i=0; i<n ; i++)
    {
        cout<< arr[i]<< " ";
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};

    reverse(arr, 5);



    return 0;
}


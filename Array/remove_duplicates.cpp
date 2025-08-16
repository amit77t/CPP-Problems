#include<iostream>
using namespace std;

int remove(int arr[], int n)
{
    int res=1;
    for(int i=1; i<n ; i++)
    {
        if(arr[i]!= arr[res])
        {
            arr[res]=arr[i];

            res++;
        }
    }
    return res;
}


int main(){


    int arr[7]={10,20,20,30,30,30,30};

    cout<<remove(arr, 7);
    return 0;

}
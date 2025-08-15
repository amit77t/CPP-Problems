#include<iostream>
#include<vector>
using namespace std;

void leftRotateByOne(vector<int> &arr)
{   int n=arr.size();
    int temp=arr[0];

    for(int i=1; i<arr.size(); i++)
    {
        arr[i-1]=arr[i];
    }

    arr[n-1]=temp;
}

int main()
{

    vector<int> arr={1,2,3,4,5};

    leftRotateByOne(arr);

    for(auto x: arr)
    {
        cout<< x<<" ";
    }
    return 0;
}
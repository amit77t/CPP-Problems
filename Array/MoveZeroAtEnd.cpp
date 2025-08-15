#include<iostream>
#include<vector>
using namespace std;

void moveZeroEnd(vector<int> &arr)
{
   int cnt=0;
   for(int i=0; i<arr.size(); i++)
   {
    if(arr[i]!=0)
    {
        swap(arr[i], arr[cnt]);
        cnt++;
    }
   }
}

int main()
{  
    vector<int> arr={8,5,0,10,0,20};

    moveZeroEnd(arr);

    for(auto x: arr)
    {
        cout<<x<< " ";
    }

    return 0;
}
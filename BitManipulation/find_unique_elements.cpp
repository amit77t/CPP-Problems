#include<iostream>
#include<vector>
using namespace std;


int findUnique(vector<int>& arr)
{ 
    int ans=0;
    for(int n:arr)
    {
        ans=ans^n;
    }
    return ans;

}

int main()
{
    vector<int> arr={2,2,5,3,3};
    cout<<findUnique(arr)<<endl;
    return 0;
}
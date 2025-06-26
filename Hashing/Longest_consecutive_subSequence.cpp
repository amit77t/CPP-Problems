#include<iostream>
#include<unordered_set>
using namespace std;

int longestconsecutive(int arr[], int n)
{

    unordered_set<int> h(arr, arr+n);

    int res=1;
    for(auto x: h)
    {
        if(h.find(x-1)==h.end())
        {
            int curr=1;
            while(h.find(x+curr)!=h.end())
            curr++;
            res=max(res,curr);
        }
    }
    return  res;


}



int main()
{

int arr[]={1,3,9,2,8,2};
int n=6;

cout<<longestconsecutive(arr, n);
return 0;

}
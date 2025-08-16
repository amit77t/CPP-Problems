#include<iostream>
#include<vector>
using namespace std;


int maxLength(vector<int> arr)
{
    int cnt=1;
    int n=arr.size();
    for(int i=0; i<n ; i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            if(arr[j-1]%2==0 && arr[j]%2==1 || arr[j-1]%2==1 && arr[j]%2==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
}



int main()
{

    vector<int> arr={10,12,14,8,10};

    cout<<maxLength(arr);

    return 0;

}
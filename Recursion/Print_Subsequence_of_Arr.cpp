#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print(int arr[], vector<int>& v ,int idx ,int n)
{
        if(idx==n)
        {
            for(auto x : v)
            {
                cout<<x<<" ";
            }
            if(v.size()==0)
            {
                cout<<"{}";
            }
            cout<<endl;
            return ;
        }

        v.push_back(arr[idx]);
        print(arr, v, idx+1, n);
        v.pop_back();
        print(arr, v, idx+1, n);
}

int main()
{
    int arr[4]={1,2,3};
    vector<int> v;

    print(arr, v, 0, 3);
}
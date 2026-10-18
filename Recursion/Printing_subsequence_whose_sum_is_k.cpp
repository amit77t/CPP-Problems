#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print(int arr[], vector<int>& v ,int sum, int key,int idx ,int n)
{
        if(idx==n)
        {
            if(sum==key)
            {
               for(auto x : v)
            {
                cout<<x<<" ";
            }
            if(v.size()==0)
            {
                cout<<"{}";
            }
            }
            
            cout<<endl;
            return ;
        }

        v.push_back(arr[idx]);
        sum+=arr[idx];
        print(arr, v, sum, key, idx+1, n);
        sum-=arr[idx];
        v.pop_back();
        print(arr, v,sum, key,  idx+1, n);
}

int main()
{
    int arr[4]={1,2,1};
    vector<int> v;
    

    print(arr, v, 0, 2, 0, 3);
}
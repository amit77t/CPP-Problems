#include<iostream>
#include<unordered_map>
using namespace std;

int countFreq(int arr[], int n)
{
    unordered_map<int, int> m;

    for(int i=0; i<n ; i++)
    {
        m[arr[i]]++;
    }

    for(auto e: m)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }
}


void printFreq(int arr[], int n)
{
    for(int i=0; i<n ; i++)
    {
        bool flag=false;
        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
            if(flag==true)
            continue;

            int freq=1;
            for(int j=i+1; j<n ; j++)
            {
                if(arr[i]==arr[j])
                freq++;

                cout<<arr[i]<< " "<<freq<<endl;
            }

        
    }
}
int main()
{
    int arr[5]={10,20,20,30,10};

    countFreq(arr,5);

    // printFreq(arr, 5);
    return 0;
}
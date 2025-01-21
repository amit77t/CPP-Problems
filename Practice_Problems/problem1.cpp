#include<iostream>
using namespace std;

int pairDivisible(int arr[], int n , int k)
{  int count =0;
    for(int i=0; i<n-1; i++ )
    {
        for(int j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j])%k ==0)
            {
                count++;
                cout<< arr[i]<<","<<arr[j]<<endl;;
            }
        }
        
    }
    return count;
}

int main()
{
   int  arr[6]={1,2,3,4,5,6};
    int  n=6;

 int result=pairDivisible(arr, n, 5);
 cout<<"No of pair will be : "<<result<<endl;
 return 0;

}
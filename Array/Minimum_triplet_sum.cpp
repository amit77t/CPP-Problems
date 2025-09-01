#include<iostream>
#include<vector>
using namespace std ;

int minimumTripetSum(vector<int> &arr)
{
    int n=arr.size();
    
    int mini=__INT_MAX__;
    bool found=false;

    for(int i=0; i<n ;i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]<arr[j] && arr[j]>arr[k])
                {
                    int sum=arr[i]+arr[j]+arr[k];

                    if(sum<mini)
                    {
                        mini=sum;
                    }
                     
                    found=true;

                    



                    
                }
            }
        }
    }
    return  (found?mini:-1);
}



int main()
{
   vector<int> arr={5,4,8,7,10,2};
   cout<< minimumTripetSum(arr);
   return 0;


}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
     
     for(int i=0; i< n; i++)
     {
         for(int j=0; j<=i; j++)
         {
             cout<<"*"<<" ";
         }
         cout<<endl;
     }
     
     for(int i=n-1; i>0; i--)
     {
         for(int j=0; j<i ; j++ )
         {
             cout<<"*"<<" ";
         }
         cout<<endl;
     }
    return 0;
}
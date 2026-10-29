#include<iostream>
using namespace std;


int main()

{
    
     int a, b;
     
     cout<<"Enter any two numbers ";
     cin>>a>>b;
     
     if(a%b==0)
     {
         cout<<a<<" is multiple of "<<b;
     }
    else if( b%a==0)
    {
        cout<<b<<" is multiple of"<<a;
    }
    
    else{
        cout<<"No one is multiple of each other";
    }
    return 0;
}
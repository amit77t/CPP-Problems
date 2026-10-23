#include<iostream>
using namespace std;

int main()
{
    
   int a,b,c;
   cout<<"Please Enter the sides of triangle"<<endl;
   cin>>a>>b>>c;
   
   if( a+b>c && b+c> a && a+c>b)
   {
       cout<<" Valid Triangle";
   }else
   {
       cout<<"Invalid Triangle";
   }
    
    
    return 0;
}
#include<iostream>
using namespace std;


int main()
{
    int a, b, c;

     cout<< "enter a value =  ";
     cin>>a;
     cout<< "enter b value =  ";
     cin>>b;

     c=a;
     
     
     a=b;
     b=c;

     cout<<"a = "<<a <<" b = "<< b;
     return 0;

}
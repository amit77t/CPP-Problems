#include<iostream>
using namespace std;

int pro(int a, int b)
{
    return a*b;
}

int main()
{
    int a, b;
    cout<<"Enter the two number";
    cin>>a>>b;

   
cout<<"the product is "<<pro(a,b);
 return 0;
}
#include<iostream>
using namespace std;
int  add(int a, int b)
{
   return a+b;
}


int main()
{
    int a,b;
    cout<<"enter the first no : \n";
    cin>>a;
    cout<<"enter the second no : \n";
    cin>>b;

    cout<<add(a,b);
    return 0;
    

}
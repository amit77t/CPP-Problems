#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    if(n>0)
    {
        cout<<"the no is +ve";
    }
    else if(n<0)
    {
         cout<<"the no is -ve";
    }
    else 
    {
         cout<<"the no is 0";
    }
    return 0;

}
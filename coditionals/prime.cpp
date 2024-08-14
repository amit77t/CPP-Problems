#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    bool isPrime= true;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"this is prime number";
    }
    else{
        cout<<"this is not prime number";
    }
    return 0;
}
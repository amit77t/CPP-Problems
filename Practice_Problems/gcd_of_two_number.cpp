#include<iostream>
using namespace std;

int gcd(int n1, int n2)
{
    while(n1> 0 && n2> 0)
    {
        if(n1>n2)
        {
            n1=n1%n2;
        }
        else{
           n2=n2%n1;
        }
    }

    if(n1==0)
    {
        return n2;
    }

    return n1;
}


int main()
{

    cout<<gcd(9,12)<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}


int main()
{
   cout<<gcd(18,48);
   return 0;
}
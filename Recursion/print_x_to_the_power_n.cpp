#include<iostream>
using namespace std;

int pow(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    int halfPow= pow(x, n/2);
    int halfPowSquare=halfPow*halfPow;
    if(n%2 !=0)
    {
        return x*halfPowSquare;
    }
    return halfPowSquare;
}


int main()
{
   cout<<pow(2,2)<<endl;
   return 0;
}
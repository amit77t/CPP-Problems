#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n*factorial(n-1);
}

int main()
{
    int fact=factorial(5);
    cout<< fact<<endl;
return 0;
}
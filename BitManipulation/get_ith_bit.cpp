#include<iostream>
using namespace std;
int getBit(int n, int i)
{
    int bitMask= 1<<i;

    if(!(n&bitMask))
    {
        return 0;
    }
    else{
        return 1;
    }
}


int main()
{
    int findBit=getBit(6,0);
    cout<<findBit;
    return 0;
}
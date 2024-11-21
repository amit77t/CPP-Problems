#include<iostream>
using namespace std;
int getBit(int n, int i)
{
    int bitMask= ~(1<<i);

    return n & bitMask;

    
}


int main()
{
    int findBit=getBit(6,1);
    cout<<findBit;
    return 0;
}
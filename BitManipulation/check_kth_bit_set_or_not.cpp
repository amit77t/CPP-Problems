#include<iostream>
using namespace std;


bool checkNthBitSet(int n, int k)
{
    return (n&(1<<k)!=0);
}

int main()
{

    cout<<checkNthBitSet(13,1);
    return 0;
return 0;
}
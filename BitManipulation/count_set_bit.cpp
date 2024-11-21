#include<iostream>
using namespace std;

int coutSetBit(int num)
{
    int count=0;
    while(num>0)
    {
        int lastDig=num & 1;
        count+=lastDig;
        num=num>>1;
    }

    cout<<count<<endl;
    return count;
}

int main()

{

    coutSetBit(15);
    return 0;
}
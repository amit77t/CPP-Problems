#include<iostream>
using namespace std;


int countSetBit(int n)

{ 
    int count=0;
    while(n>0)
    {
      n=n&(n-1);
      count++;
    }
    return count;
}

int main()
{
    cout<<"NUMBER OF SET BIT \n";
    cout<<countSetBit(13)<<endl;
return 0;
}
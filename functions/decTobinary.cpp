#include<iostream>
using namespace std;


void decTobin(int decNum)
{ 
    int n= decNum;
    int bin=0;
    int pow=1;
    while(n>0)
    {
        int lastDig= n%2;
        bin+=lastDig*pow;
        pow=pow*10;
        n=n/2;
    }
  cout<<bin<<endl;

}

int main()
{
    decTobin(16);
    return 0;
}
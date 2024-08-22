#include<iostream>
using namespace std;

void binTodec(int binNum)
{
  int n=binNum;
  int decNum=0;
  int pow=1;

  while(n>0)
  {
    int lastDig=n%10;
    decNum+=lastDig*pow;
    pow=pow*2;
    n=n/10;
  }
  cout<< decNum <<endl;

   



}

int main()
{
    binTodec(1110);
    return 0;
}
#include<iostream>
using namespace std;
void clearLastbit(int n,int i)
{
     int bitMask= ~(0) << i;
     n=n&bitMask;
     cout<<n<<endl;
}

int main()
{
  clearLastbit(15,2);
  return 0;
}



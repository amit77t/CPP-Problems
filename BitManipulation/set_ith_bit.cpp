#include<iostream>
using namespace std;
 

int setIthbit(int n, int i)
{
   int bitMask=1<<i;

   return (n|bitMask);
      
}

int main()
{
  cout<<setIthbit(15,4)<<endl;

  return 0;
}
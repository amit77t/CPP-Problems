#include<iostream>
using namespace std;

int rev(int n)
{
    
    int s=0;

    while(n>0)
    {
      int r= n%10;
      s=s*10+r;
      n=n/10;

    }
    return s;
}

bool isPalin(int n)
{
    int revnum= rev(n);
    return n == revnum;
}


int main()
{
   int n;
   cout<<"enter the number";
   cin>>n;
    cout<<isPalin(n);
   return 0;
}


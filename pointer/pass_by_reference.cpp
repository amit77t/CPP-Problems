#include<iostream>
using namespace std;

void changeA(int *ptr)
{
     *ptr=20;
     cout<<*ptr<<"\n";
}


int main()
{
   int a=10;
   changeA(&a);
   cout<<a<<"\n";
   return 0;
}
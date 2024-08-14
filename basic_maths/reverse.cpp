#include<iostream>
using namespace std;

void reverse(int n)
{
   int rev=0, r;
   while(n>0)
   {
    int r=n%10;
    rev=rev*10+r;
    n=n/10;
   }

   cout<<"the reverse of number is "<< rev<< endl;
   


}






int main()
{
   int n;
   cout<<"enter the number";
   cin>>n;
  
  reverse(n);
  
  return 0;
}
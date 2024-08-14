#include<iostream>
using namespace std;

void facto(int num)
{
   int i, f=1;
   for(int i=1; i<=num ; i++)
   {
     f= f*i;
   }

   cout<<"the factorial of number is " << f <<endl;

}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;

    facto(n);

return 0;
    

}
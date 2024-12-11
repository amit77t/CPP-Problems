#include<iostream>
using namespace std;

int sumOfDigit(int n)
{
    if(n==0)
    {
        return 0;
    }

    return (n%10)+sumOfDigit(n/10);
}


int main()
{
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;

  cout<<"The sum of digit is : "<< sumOfDigit(n)<<endl;
  return 0;
}
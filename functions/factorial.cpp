#include<iostream>
using namespace std;
int factorial(int n)
{  
    int fact=1;
    for (int  i = 1; i <= n; i++)
    {
       fact=fact*i;  
    } 
    return fact;
    


}


int main()
{
  int n;
  cout<<"Enter the number";
  cin>>n;

  cout<<factorial(n)<<endl;
  return 0;
}
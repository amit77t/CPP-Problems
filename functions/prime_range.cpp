#include<iostream>
using namespace std;
 

 bool isPrime(int n)
 {
    if(n==1)
    {
        return false;
    }

    for(int i=2; i*i<=n ; i++)
    {
         if(n%i==0){
            return false;
         }
    }
    return true;
 }
  void allPrime( int n)
  {
    for(int i=2; i<=n ; i++)
    {
        if(isPrime(i))
        {
            cout<< i <<" ";
        }
    }
    cout<<endl;
  }

 


int main()
{
  int n;
  cout<<"enter the range";
  cin>>n;
  allPrime(n);

  return 0;

}
#include<iostream>
using namespace std;
int main()
{   
     int n,n1, sum=0;
      cout<< "enter the number"<<endl;
      cin>>n;

      n1=n;

      while(n!=0)
      {
         int r=n%10;
         sum=sum+r*r*r;
         n=n/10;

      } 
      if(n1==sum)
      {
        cout<<"Yes it is an armstrong number";
      }
      else{
        cout<<"it is not armstrong number";
      }

      return 0;
}
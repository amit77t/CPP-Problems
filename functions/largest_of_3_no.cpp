#include<iostream>
using  namespace std;

int largest(int a, int b, int c)
{
   if(a>b && a>c)

   {
    return a;
   }
   else if( b>a && b>c)
   {
    return b;
   }
   else{
    return c;
   }

}


int main()
{
    int a,b,c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;

   
   cout<<"The largest no. is "<<largest(a, b,c)<<endl;
   
    return 0;



}
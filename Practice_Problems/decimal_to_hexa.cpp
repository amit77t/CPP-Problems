#include<iostream>
#include<string>
using namespace std;

string  deciTohex(int n)
{
    string ans="";

    while(n!=0)

    {
       int rem=n%16;
       char ch;

       if( rem <10 )
       {
           ch= rem+ 48;
       } 
       else{
        ch=rem+55;
       }

       ans=ans+ch;
       n=n/16;
    }
   int i=0 , j=ans.size()-1;

   while(i<=j)
   {
    swap(ans[i], ans[j]);
    i++;
    j--;
   }
   return ans;

}

int main()
{
   int n=2545;

   cout<< deciTohex(n)<< endl;
    return 0;
}
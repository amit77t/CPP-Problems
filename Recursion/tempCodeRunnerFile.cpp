#include<iostream>
#include<string>
using namespace std;

int countSubarray(string str, int i, int j , int n)
{
   if(n==1)
   {
    return 1;
   }

   if(n<=0)
   {
    return 0;
   }

   int result=countSubarray(str, i+1, j, n-1)+countSubarray(str, i , j+1, n-1) - countSubarray(str, i+1, j-1, n-2);

   if(str[i]== str[j])
   {
     result++;
   }
   return result;
}



int main()
{
    string str = "abca";
    int  n= str.size();

    cout<< countSubarray(str, 0, n-1, n);
    return 0;
}
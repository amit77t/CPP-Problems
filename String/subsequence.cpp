#include<iostream>
#include<string>
using namespace std;


bool isSubsequence(string s1, string s2)
{
   int m=s1.length();
   int n=s2.length();
   int j=0;
   for(int i=0; i<m && j<n; i++)
   {
    if(s1[i]==s2[j])
    {
        j++;
    }
   }
   return (j==n);
}

int main()
{
    string s1="abcde";
    string s2="ade";

    cout<<isSubsequence(s1, s2);
    return 0;
}
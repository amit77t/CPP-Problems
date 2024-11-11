#include<iostream>
#include <string.h>
using namespace std;




bool palindrome(char word[], int n)
{
    int s=0, e=n-1;
    while(s<e)
    {
        if(word[s]!=word[e])
        {
          cout<<"Not valid palindrome";
          return false;
        }
    }
 cout<<"Valid Palindrome";
 return true;
     
}

int main()
{
  char word[]="dad";
  palindrome(word, strlen(word));

  
  return 0;
}

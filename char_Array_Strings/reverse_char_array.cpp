#include<iostream>
#include <string.h>
using namespace std;

void reverse(char word[], int n)
{
   int s=0;
   int e=n-1;

   while(s<e)
   {
        swap(word[s], word[e]);
        s++;
        e--;
   }
}

int main()
{
  char word[]="amit";
  reverse(word, strlen(word));

  cout<< word <<endl;
  return 0;
}

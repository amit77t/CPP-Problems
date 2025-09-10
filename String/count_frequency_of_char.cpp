#include<iostream>
#include<string>
using namespace std;




int main()
{
   string str="hello";
   int count[26]={0};
   for(int i=0; i<str.length(); i++)
   {
    count[str[i]-'a']++;
   }

   for(int i=0; i<26; i++)
   {
    if(count[i]>0){
        cout<<(char)(i+'a')<<" ";
        cout<<count[i]<<endl;
    }

   }
   return 0;
}
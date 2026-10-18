#include<iostream>
#include<string>
using namespace std;


void removeSpace(string &s)
{    
    string str=" ";
    for(char ch: s)
    { 
        if(ch!=' ')
        {
              str+=ch;
        }

    }
    cout<<str<<endl;
}



int main()
{

    string s="hello world";
    removeSpace(s);
return 0;
}
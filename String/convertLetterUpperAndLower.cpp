#include<iostream>
#include<string>
using namespace std;
void convert(string &s)
{
    for(char &ch: s)
    {
        if(ch<= 'a' && ch>='z')
        {
            ch=ch-32;
        }
        else if(ch<='A' && ch >='Z')
        {
            ch=ch+32;
        }
    }
    cout<<s;
}


int main()
{ 

    string s="AeRoPLanE";

    convert(s);
return 0;
}
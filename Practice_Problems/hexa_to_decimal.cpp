#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int hexa(string hex)
{
     int decimal=0;
     int len=hex.length();
     

     for(int i=0; i<len; i++)
     {
        char ch=hex[i];
        int value;

        if(ch>='0' && ch<='9')
        {
            value= ch -'0';
        }
        else if(ch>= 'a' && ch<='f')
        {
            value=ch-'a'+10;
        }
        else if(ch>='A' && ch<= 'F')
        {
            value=ch-'A'+10;
        }

        int pos=len-i-1;

        decimal+=value*pow(16, pos);
     }
     return decimal;
}


int main()
{
    string hex="1A3";

    cout<<hexa(hex)<<endl;


    return 0;
}
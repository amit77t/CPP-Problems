#include<iostream>
using namespace std;

int main()
{
    
    char ch;
    cout<<"Enter any character ";
    
    cin>>ch;
    
    int num=ch;
    
    if(num >=48 && num<=57)
    {
        cout<<"digit";
    }
    else if(num>=65 && num<=90)
    {
      cout<<"UpparCase";
    }
    else if(num>=97 && num<= 122)
    {
        cout<<"LowerCase";
    }
    else{
        cout<<"Special Character";
    }
    
    
    return 0;
}
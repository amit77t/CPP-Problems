#include<iostream>
#include<string>
using namespace std;
bool isPal(string &str)
{
    int s=0;
    int e=str.length()-1;

    while(s<e)
    {
        if(str[s]!=str[e])
        {
            return false;
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    string str="mom";

    cout<<isPal(str);
    return 0;
}
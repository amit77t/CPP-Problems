#include<iostream>
#include<string>
using namespace std;

int countWord(string &s)
{
    bool inWord=false;
    int cnt=0;
    for(char ch: s)
    {
        if(ch!=' ' && !inWord)
        {
            inWord=true;
            cnt++;
        }
        else if(ch==' ')
        {
            inWord=false;
        }
    }
    return cnt;
}

int main()
{
    string s="hello how are you";
    cout<<countWord(s)<<endl;
    return 0;
}
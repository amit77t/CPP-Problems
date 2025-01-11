#include<iostream>
#include<string>
using namespace std;
void printPermutations(string str, string ans)
{  
    int n=str.size();
    if(n==0)
    {
        cout<<ans<<"\n";
        return;
    }
    for(int i=0; i<str.size(); i++)
    {
        char ch=str[i];

        string nextStr= str.substr(0,i)+ str.substr(i+1, n-i-1);
        printPermutations(nextStr, ans+ch);
    }
}



int main()
{
    string str="abc";
    string ans=" ";

    printPermutations(str, ans);

    return 0;
}
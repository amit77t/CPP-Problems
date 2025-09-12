#include<iostream>
#include<string>
using namespace std;

int leftMost(string &str)
{
    char freq[256]={0};

    for(int i=0; i<str.length(); i++)
    {
        freq[str[i]]++;
    }

    for(int i=0; i<str.length(); i++)
    {
        if(freq[str[i]]>1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
  string str="hello";
  cout<<leftMost(str);
  return 0;
}
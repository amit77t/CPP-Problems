#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool isAnagram(string &s1, string &s2)
{
    unordered_map<char, int> freq;

    for(char c: s1)
    {
        freq[c]++;
    }
    for(char c:s2)
    {
        freq[c]--;
    }


    for(auto ch : freq)
    {
        if(ch.second!=0)
        {
            return false;
        }
    }
 return true;
}

int main()
{
    string s1="hello";
    string s2="helllllo";

    cout<<isAnagram(s1, s2);

    return 0;
}
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

bool validAnagram(string s, string t)
{
     if(s.size()!=t.size())
        {
            return false;
        }
        
        unordered_map<char, int> m;
        for(int i=0; i<s.size(); i++)
        {
            if(m.count(s[i]))
            {
                m[s[i]]++;
            }
            else{
                m[s[i]]=1;
            }
        }
        
        for(int i=0; i<t.size(); i++)
        {
            if(m.count(t[i]))
            {
                m[t[i]]--;
                if(m[t[i]]==0)
                {
                    m.erase(t[i]);
                }
            }
            else{
                return false;
            }
        }
        return m.size()==0;
}

int main()
{

    string s1 = "geeks" ;
    string s2 = "kseeg";

    cout<< validAnagram(s1,s2);
    return 0;
}
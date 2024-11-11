#include<iostream>
#include<string>

using namespace std;

bool isAnagram(string s1, string s2)
{
    if(s1.length() != s2.length())
    {    
        cout<<"Not valid anangram";
        return false;
    }
     int count[26]={0};
   for(int i=0; i<s1.length(); i++)
    {
        int indx=s1[i]-'a';
        count[indx]++;
    }
   for(int i=0; i<s2.length(); i++)
    {
        int indx=s2[i]-'a';
        if(count[indx]==0)
        {
             cout<<"Not valid anangram";
        return false;
        }
        count[indx]--;
    }
     cout<<"valid anangram";
        return true;

}

int main()
{
    string s1= "anagram";

    string s2= "nagaram";

    isAnagram(s1, s2);
    return 0;


}
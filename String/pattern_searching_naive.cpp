#include<iostream>
#include<string>

using namespace std;


void patternSearch(string &s1, string &s2)
{
    int m=s1.length();
    int n=s2.length();

    for(int i=0; i<=n-m; i++)
    {
        int j;
        for(j=0; j<m; j++)
        {
            if(s1[j]!=s2[i+j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }

    }


}

int main()
{
    string txt="ABABABCD";
    string pat="ABAB";

    patternSearch(pat, txt);
    return 0;
    


}
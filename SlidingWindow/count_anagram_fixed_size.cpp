#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;



int search(string &pat, string &txt) {
        
        vector<int> freqP(26,0), freqW(26,0);
        for(char c: pat)
        {
            freqP[c-'a']++;
            
            
        }
        
        int count=0, i=0, j=0;
        
        while(j<txt.size())
        {
            freqW[txt[j]-'a']++;
            if(j-i+1== pat.size())
            {
                if(freqP==freqW)
                   count++;
            
                freqW[txt[i]-'a']--;
                i++;
            }
            j++;
        }
        return count;
}


int main()
{
   string txt = "forxxorfxdofr";
   string pat = "for";

   cout<<search(pat, txt)<<endl;

   return 0;

}
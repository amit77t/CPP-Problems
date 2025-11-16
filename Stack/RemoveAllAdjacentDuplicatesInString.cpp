#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
string removeDuplicate(string &str)
{
    stack<char> st;

    for(char ch : str)
    {
        if(!st.empty() && st.top()==ch)
        {
            st.pop();
        }
        else{
            st.push(ch);
        }
    }

    string ans="";

    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}



int main()
{ 

    string str="abbaca";
    cout<<removeDuplicate(str);

    
return 0;
}
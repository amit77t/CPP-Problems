#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int n = s.length();
        int st = 0;
        int e = n - 1;

        while (st < e)
        {   
            while (st < e && !isVowel(s[st]))
            {
                st++;
            }
            while (st < e && !isVowel(s[e]))
            {
                e--;
            }

            if (st < e)
            {
                swap(s[st], s[e]);
                st++;
                e--;
            }
        }
        return s;
    }
};

int main()
{
    Solution solution;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);  

    string result = solution.reverseVowels(input);

    cout << "String after reversing vowels: " << result << endl;

    return 0;
}

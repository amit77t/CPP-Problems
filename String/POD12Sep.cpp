#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char ch) {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    bool doesAliceWin(string s) {
        int vowelCount = 0;
        for (char c : s) {
            if (isVowel(c)) vowelCount++;
        }
      
        if (vowelCount == 0) return false;

        
        return true;
    }
};

int main() {
    Solution sol;

    vector<string> testCases = {"bcd", "a", "aa", "ab", "aba"};
    for (string s : testCases) {
        cout << "s = \"" << s << "\" -> ";
        if (sol.doesAliceWin(s)) {
            cout << "Alice wins";
        } else {
            cout << "Bob wins";
        }
        cout << endl;
    }

    return 0;
}

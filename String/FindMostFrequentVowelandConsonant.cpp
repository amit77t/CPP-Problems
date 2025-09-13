#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxFreqSum(string s) {
        int n = s.length();
        unordered_map<char, int> freq;

        // Count frequencies
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }

        int maxFreqV = 0;
        int maxFreqC = 0;

        // Find max freq among vowels and consonants
        for (auto it : freq) {
            if (isVowel(it.first)) {
                if (it.second > maxFreqV) {
                    maxFreqV = it.second;
                }
            } else {
                if (it.second > maxFreqC) {
                    maxFreqC = it.second;
                }
            }
        }

        return maxFreqV + maxFreqC;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int result = sol.maxFreqSum(s);
    cout << "Maximum frequency sum (vowel + consonant) = " << result << endl;

    return 0;
}

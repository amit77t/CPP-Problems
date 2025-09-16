#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        // Step 1: Put broken letters into a set for quick lookup
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());

        // Step 2: Split text into words using stringstream
        stringstream ss(text);
        string word;
        int count = 0; // to store how many words we can type

        // Step 3: Process each word
        while (ss >> word) {
            bool canType = true; // assume word is valid initially

            // Step 4: check each character of the word
            for (char ch : word) {
                if (broken.count(ch)) { 
                   
                    canType = false; 
                    break; 
                }
            }

            if (canType) count++;
        }

     
        return count;
    }
};

int main() {
    Solution sol;

    string text = "hello world apple";
    string brokenLetters = "ad";

   
    int result = sol.canBeTypedWords(text, brokenLetters);

    
    cout << "Number of words that can be typed: " << result << endl;

    return 0;
}

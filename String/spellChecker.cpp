#include <bits/stdc++.h>
using namespace std;


string toLower(const string &word) {
    string res = word;
    for (auto &ch : res) ch = tolower(ch);
    return res;
}


string maskVowels(const string &word) {
    string res = toLower(word);
    for (auto &ch : res) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            ch = '*';
    }
    return res;
}

vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
 
    unordered_set<string> exact(wordlist.begin(), wordlist.end());

    
    unordered_map<string, string> caseMap;


    unordered_map<string, string> vowelMap;

    
    for (string &w : wordlist) {
        string lower = toLower(w);
        string masked = maskVowels(w);

        if (caseMap.find(lower) == caseMap.end())
            caseMap[lower] = w;

        if (vowelMap.find(masked) == vowelMap.end())
            vowelMap[masked] = w;
    }

    
    vector<string> ans;
    for (string q : queries) {
        if (exact.count(q)) {
            ans.push_back(q);
        } else {
            string lower = toLower(q);
            string masked = maskVowels(q);

            if (caseMap.find(lower) != caseMap.end()) {
                ans.push_back(caseMap[lower]); 
            } else if (vowelMap.find(masked) != vowelMap.end()) {
                ans.push_back(vowelMap[masked]); 
            } else {
                ans.push_back(""); 
            }
        }
    }
    return ans;
}

int main() {
    vector<string> wordlist = {"KiTe","kite","hare","Hare"};
    vector<string> queries = {"kite","Kite","KiTe","Hare","HARE","Hear","hear","keti","keet","keto"};

    vector<string> result = spellchecker(wordlist, queries);

    for (string &r : result) {
        cout << "\"" << r << "\" ";
    }
    cout << endl;
    return 0;
}

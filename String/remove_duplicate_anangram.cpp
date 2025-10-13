#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

vector<string> deleteAnagram(vector<string> &str)
{
    vector<string> ans;
    string prevStore = "";

    for (auto &w : str)
    {
        string s = w;
        sort(s.begin(), s.end()); 

        if (ans.empty() || s != prevStore)
        {
            ans.push_back(w);
            prevStore = s;
        }
    }
    return ans;
}

int main()
{
    vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};

    vector<string> result = deleteAnagram(words);

    cout << "Resultant Array after removing consecutive anagrams:\n";
    for (auto &word : result)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

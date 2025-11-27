#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n = s.size();
        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a')
                a++;
            else
                b++;
        }
        return abs(a - b);
    }
};

int main() {
    string s;
    cin >> s;

    Solution sol;
    int result = sol.minLengthAfterRemovals(s);

    cout << result << endl;

    return 0;
}

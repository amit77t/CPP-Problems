#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int gcd(int a, int b)
    {
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int> s;

        for(int num : nums)
        {
            s.push(num);

            while(s.size() > 1)
            {
                int a = s.top(); s.pop();
                int b = s.top(); s.pop();

                int g = gcd(a, b);

                if(g == 1)
                {
                    s.push(b);
                    s.push(a);
                    break;
                }
                else {
                    int l = (a / g) * b; // LCM of a and b
                    s.push(l); // continue checking with previous elements
                }
            }
        }

        // Transfer stack to vector in correct order
        vector<int> ans(s.size());
        for(int i = s.size() - 1; i >= 0; i--)
        {
            ans[i] = s.top();
            s.pop();
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {6, 4, 3, 2, 7, 6, 2};

    vector<int> result = sol.replaceNonCoprimes(nums);

    cout << "Output: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

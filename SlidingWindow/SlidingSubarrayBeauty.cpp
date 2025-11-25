#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) 
    {
        vector<int> freq(50, 0);
        vector<int> ans;

        int n = nums.size();
        int i = 0, j = 0;

        while (j < n)
        {
            // Add new element
            if (nums[j] < 0)
            {
                freq[-nums[j] - 1]++;
            }

            // Window hit size k
            if (j - i + 1 == k)
            {
                int count = 0;
                int beauty = 0;

                // find x-th smallest negative
                for (int idx = 49; idx >= 0; idx--)
                {
                    count += freq[idx];
                    if (count >= x)
                    {
                        beauty = -(idx + 1);
                        break;
                    }
                }

                if (count < x)
                {
                    beauty = 0;
                }

                ans.push_back(beauty);

                // remove outgoing element
                if (nums[i] < 0)
                {
                    freq[-nums[i] - 1]--;
                }

                i++;
            }

            j++;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, -3, -2, 4, -1, -5};
    int k = 3;
    int x = 2;

    vector<int> result = sol.getSubarrayBeauty(nums, k, x);

    cout << "Output: ";
    for (int v : result)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}

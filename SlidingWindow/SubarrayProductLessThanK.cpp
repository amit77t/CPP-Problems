#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int n = nums.size();

        if (k <= 1) return 0;   // edge case

        int count = 0;
        int prod = 1;

        int i = 0, j = 0;

        while (j < n)
        {
            // expand window
            prod = prod * nums[j];

            // shrink window
            while (prod >= k)
            {
                prod = prod / nums[i];
                i++;
            }

            // number of valid subarrays ending at j
            count += (j - i + 1);

            j++;
        }

        return count;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {10, 5, 2, 6};
    int k = 100;

    int result = obj.numSubarrayProductLessThanK(nums, k);

    cout << "Number of subarrays: " << result << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k) {
        int cnt = 0;     // consecutive bloomed flowers
        int noOfB = 0;   // number of bouquets made

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= day) { 
                cnt++;  // this flower is bloomed
            } else {
                noOfB += (cnt / k); // make bouquets from previous group
                cnt = 0; // reset consecutive count
            }
        }

        // count the last group
        noOfB += (cnt / k);

        return noOfB >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = 1LL * m * k;
        if (val > bloomDay.size()) return -1; // impossible to make enough bouquets

        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(bloomDay, mid, m, k)) {
                high = mid - 1; // try smaller day
            } else {
                low = mid + 1;  // need more days
            }
        }
        return low;
    }
};

int main() {
    Solution sol;

    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    int result = sol.minDays(bloomDay, m, k);
    cout << "Minimum number of days required = " << result << endl;

    return 0;
}

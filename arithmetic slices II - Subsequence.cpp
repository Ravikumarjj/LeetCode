#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;

        vector<unordered_map<long long, int>> dp(n);
        int count = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                long long diff = static_cast<long long>(nums[i]) - nums[j];
                // Increment count of arithmetic sequences ending at nums[i] with difference 'diff'
                dp[i][diff] += dp[j][diff] + 1;
                // Add to count only those sequences that have at least 3 elements
                if (dp[j].find(diff) != dp[j].end()) {
                    count += dp[j][diff];
                }
            }
        }

        return count;
        }
};  
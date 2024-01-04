#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int a : nums) {
            ++count[a];
        }
        int res = 0;
        for (auto& [_, c] : count) {
            if (c == 1) return -1;
            res += (c + 2) / 3;
        }
        return res;
    }
};
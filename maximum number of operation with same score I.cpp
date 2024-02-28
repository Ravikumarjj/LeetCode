#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums) {
        if(nums.size()<2)return 0;
        int sum = nums[0]+nums[1];
        int ans=1;
        for(int i=2;i<nums.size()-1;i+=2){
            if(nums[i]+nums[i+1]==sum)ans++;
            else break;
        }
        return ans;
    }
};
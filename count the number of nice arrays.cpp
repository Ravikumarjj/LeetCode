#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int atmostSubarray(vector<int>&nums, int goal)
    {
        if(goal<0)
            return 0;
        int sum=0;
        int i=0;
        int j=0;
        int res=0; 
        while(j<nums.size())
        {
            
            sum+=(nums[j]%2); // it is a odd number it add 1 else 0 
            while(sum>goal)
            {
                sum-=(nums[i]%2);
                i++;
            }
            res+=(j-i+1);
            
            j++;
        }
        
        return res;
    }
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmostSubarray(nums,k)-atmostSubarray(nums,k-1);
    }
};
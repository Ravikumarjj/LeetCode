#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0,n=arr.size(),i;
        for(i =0;i<n;i++)
		{
            int contribution = ceil((i+1)*(n-i)/2.0);
            //calculate the contribution for all odd subarrays.eg
            //for n=5, i=0 position element will contribute in three sub array max.
            ans+=(contribution*arr[i]);
        }
        return ans;
    }
};
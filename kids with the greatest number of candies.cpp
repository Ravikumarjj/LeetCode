#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        int n= candies.size();
        for(int i =0;i<n;i++){
            maxi=max(maxi,candies[i]);
        }
        vector<bool> ans;
        for(auto x : candies){
            if(x+extraCandies >=maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
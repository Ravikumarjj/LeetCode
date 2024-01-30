#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
      void solve(int ind,int n,vector<int> &s,vector<vector<int>>&ans)
    {
        //base case
        //using swapping
        if(ind==n)
        {
            ans.push_back(s);
            return;
        }
        
        //conditions
        for(int i=ind;i<n;++i)
        {
            swap(s[ind],s[i]);
            solve(ind+1,n,s,ans);
            swap(s[ind],s[i]); //backtrack
        }
    }
    public:
    //Complete this function
    
    vector<vector<int>> permute(vector<int> nums)
    {
       int n=nums.size();
       vector<vector<int>>ans;
       solve(0,n,nums,ans);
       sort(ans.begin(),ans.end());
       return ans;
    }
    
};
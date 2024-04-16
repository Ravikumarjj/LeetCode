#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
int kDistinctChars(int k, string &str)
{
    // Write your code here
    int maxlen=0;
    int l=0,r=0;
    unordered_map<char,int> mp;
    while(r<str.length()){
        mp[str[r]]++;
         if(mp.size()>k){
            mp[str[l]]--;
            if(mp[str[l]]==0)mp.erase(str[l]);
            l++;
        }
        if (mp.size() <= k) {
            maxlen = max(maxlen, r - l + 1);
        }
        r++;
    }
    return maxlen;

}
};
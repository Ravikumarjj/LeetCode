class Solution {
public:
    string customSortString(string order, string s) {
        int n = order.length();
        int m = s.length();
        map<char,int> mp;
        for(auto x : s){
            mp[x]++;
        }
        string ans="";
        for(auto x : order){
            if(mp.find(x)!=mp.end()){
                while(mp[x]){
                    ans+=x;
                    mp[x]--;
                }
                if(mp[x]==0) mp.erase(x);
            }
        }
        for(auto x : mp){
            while(x.second){
                ans+=x.first;
                x.second--;
            }
        }
        return ans;
     }
};
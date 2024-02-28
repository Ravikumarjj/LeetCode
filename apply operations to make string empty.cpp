class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int> mp;
        int maxi=INT_MIN;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            maxi=max(mp[s[i]],maxi);
        }
        string ans="";
        for(int i=s.length()-1;i>=0;i--){
            if(mp[s[i]]==maxi) {
                mp[s[i]]=0;
                ans+=s[i];
            }
                
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};
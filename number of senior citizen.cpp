class Solution {
public:
    int countSeniors(vector<string>& details) {
        int m = details[0].length();
        int ans=0;
        for(int i=0;i<details.size();i++){
            if(details[i][m-4]-'0'>6 ||(details[i][m-4]-'0'==6 && details[i][m-3]-'0'>0))ans++;
        }
        return ans;
    }
};
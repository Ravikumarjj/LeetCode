#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastSeen[3]={-1,-1,-1};
        int count=0;
        for(int i=0;i<s.length();i++){
            lastSeen[s[i]-'a']=i;
            if(lastSeen[0]!=-1&& lastSeen[1]!=-1&& lastSeen[2]!=-1){//we could have omit the check statement ast the minimum for non find will be -1 and 1-1 make 0 so increase in count
                count+= 1 + min(lastSeen[0],min(lastSeen[1],lastSeen[2]));
            }
        }
        return count;
    }
};
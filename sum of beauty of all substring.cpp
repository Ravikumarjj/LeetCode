#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int beautySum(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            int freq[26]={0};
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]!=0){
                        maxi=max(maxi,freq[k]);
                        mini=min(mini,freq[k]);
                    }
                }
                count+=maxi-mini;
            }
            
        }
        return count;
    }
};
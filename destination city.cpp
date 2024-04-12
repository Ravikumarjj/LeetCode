#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mp;
        for(int i=0;i<paths.size();i++){
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
        }
        for(int i=0;i<paths.size();i++){
            for(int j =0;j<2;j++)
            if(mp[paths[i][j]]==1 && j==1)return paths[i][j];
        }
        return "";
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1="";
        for(auto i:s){
            if(i==' ')k--;
            if(!k)break;
            s1+=i;
        }
        return s1;
    }
};
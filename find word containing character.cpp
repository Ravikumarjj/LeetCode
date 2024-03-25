#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isWordContain(string s,char x)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==x)
                return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int>ans;
        for(int i=0;i<words.size();i++)
        {
            if( isWordContain(words[i],x) )
                ans.push_back(i);
        }
        return ans;
    }
};
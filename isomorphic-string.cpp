class Solution {
public:
    bool isIsomorphic(string s, string t) {
      int n = s.length();
    unordered_map <char , char> replacement;
    unordered_map <char , bool> used;
    for(int i = 0 ; i < n ; i++)
    {
        if(replacement.count(s[i]))
        {
            if(replacement[s[i]] != t[i])
                return false;
        }
        else
        {
            if(used[t[i]])
                return false;
            replacement[s[i]] = t[i];
            used[t[i]] = true;
        }
    }
    return true;
    }
};
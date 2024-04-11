#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
      string ans = "";
      for(auto c: num){
          while(ans.size() && c < ans.back() && k) { ans.pop_back(); k--; }
          if(ans.size() + (c - '0')) ans.push_back(c);
      }
      while(k-- && ans.size()) ans.pop_back(); 
      return ans.size()?ans: "0";
  }
};
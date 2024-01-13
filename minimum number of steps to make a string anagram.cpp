#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
    unordered_map<char, int> count_s, count_t;

    // Count the frequency of each character in both strings
    for (char ch : s) {
        count_s[ch]++;
    }
    for (char ch : t) {
        count_t[ch]++;
    }

    // Calculate the number of steps required to make t an anagram of s
    int steps = 0;
    for (auto& pair : count_s) {
        char ch = pair.first;
        int count_in_s = pair.second;
        int count_in_t = count_t[ch];

        steps += max(0, count_in_s - count_in_t);
    }

    return steps;
        
    }
};
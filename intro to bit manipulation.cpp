#include <bits/stdc++.h>
using namespace std;
vector<int> bitManipulation(int num, int i){
    // Write your code here.
    vector<int> ans;
    int x = num & (1<<i-1);
    ans.push_back(x!=0);
    ans.push_back(num |(1<<i-1));
    ans.push_back(num &(~(1<<i-1)));
    return ans;
}
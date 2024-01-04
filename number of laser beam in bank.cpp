#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev =0, result=0;
        for(auto r : bank){
            int curr = count(begin(r),end(r),'1');
            if(curr){
                result+=prev*curr;
                prev=curr;
            }

        }
        return result;
    }
};
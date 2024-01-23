#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int val = start^goal;//provide 1 on each bit which are diff and 0 for same bit so just now count set bits
        int count=0;
        while(val){
            if(val&1)count++;
            val=val>>1;
        }
        return count;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canWinNim(int n) {   
    return n % 4 != 0 ;//note when there is two player and the step between the complete cycle just module it with n
}
};
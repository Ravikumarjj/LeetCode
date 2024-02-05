#include <bits/stdc++.h>
class Solution {
public:
    int differenceOfSums(int n, int m) {
    return n * (n + 1) / 2 - m* (n / m) * (n / m + 1);//n/m is no. of divisible by m and twice the sum of it is subtracted from total
    }
};
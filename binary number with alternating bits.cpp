class Solution {
public:
    bool hasAlternatingBits(int n) {
        int d = n&1;
        while ((n&1) == d) {
            d = 1-d;//to alternatively change the 1 to 0 nd 0 to 1
            n >>= 1;//shifting the last bits
        }
        return n == 0;//check whether it traverse completely or not
    }
};
class Solution {
public:
//as the recursion of this solution turned to fibonacci so we used the tabulation with space optimization for it
    int climbStairs(int n) {
        if(n <= 2) return n;
        int a = 1, b = 2, c;
        for(int i=3; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance =0;
        int n = x^y;
        while(n){
            if(n&1)distance++;
            n=n>>1;

        }
        return distance;
    }
};
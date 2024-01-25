#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
double solve(double x, long n){
        if(n==0) return 1;
        if(n<0) return solve(1/x,-n);
        if(n%2==0) return solve(x*x,n/2);
        else return x*solve(x*x,(n-1)/2);
    }
    double myPow(double x, int n) {
        return solve(x,(long)n); //converting to long long to ensure the overflow of change of negative to positive n
    }
    
};
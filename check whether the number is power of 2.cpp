#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{	
    // n&n-1==0 if power of 2 and n>0 hence we need to check whether the n is 0 or not
    return n && (!(n&(n-1)));
}
#include <bits/stdc++.h>
using namespace std;
void swapNumber(int &a, int &b) {
	// Write your code here.
	a^=b;
	b^=a;
	a^=b;
}
#include <bits/stdc++.h>
using namespace std;
int divideTwoInteger(int dividend, int divisor) {
	// Write your code here.
	if (divisor == 0) {
        throw std::invalid_argument("Division by zero");
    }

    // Handle overflow case: INT_MIN / -1
    if (dividend == 0) {
        return 0;
    }

    // Determine the sign of the result
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    // Convert to long long and take absolute values
    long long ldividend = abs(static_cast<long long>(dividend));
    long long ldivisor = abs(static_cast<long long>(divisor));
    long long quotient = 0;

    for (int i = 31; i >= 0; i--) {
        if ((ldivisor << i) <= ldividend) {
            ldividend -= (ldivisor << i);
            quotient |= 1LL << i;
        }
    }

    return sign == -1 ? static_cast<int>(-quotient) : static_cast<int>(quotient);
} 

/*
Algorithm: Least Common Multiple
Time: O(log(a + b))
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "lcm.h"

long long lcm(long long a, int b) {
	if (a == 0 || b == 0)
		return 0;
	a = (a / std::gcd(a, b)) * b;
	return std::abs(a);
}
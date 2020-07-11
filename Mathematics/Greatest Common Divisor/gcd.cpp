/*
Algorithm: Greatest Common Divisor
Time: O(log(a + b))
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "gcd.h"

int gcd(int a, int b) {
	while (b)
		a = std::exchange(b, a % b);
	return std::abs(a);
}

/*
Approach: Recursive
Time: O(log(a + b))
Space: O(log(a + b))
*/
int gcd_recursive(int a, int b) {
	if (b == 0)
		return std::abs(a);
	else
		return gcd_recursive(b, a % b);
}
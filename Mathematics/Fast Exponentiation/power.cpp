/*
Algorithm: Fast Exponentiation
Time: O(log n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "power.h"

double power(double x, int n) {
	double y = 1;
	if (x == 0)
		return 0;
	while (n) {
		if (n & 1)
			y = (n < 0) ? y / x : y * x;
		n /= 2;
		x *= x;
	}
	return y;
}

double power_recursive(double x, int n) {
	if (n == 0)
		return 1;
	else if (x == 0)
		return 0;
	double y = power_recursive(x, n / 2);
	y *= y;
	if (n & 1)
		y = (n < 0) ? y / x : y * x;
	return y;
}
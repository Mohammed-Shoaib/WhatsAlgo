/*
Algorithm: Fast Modular Exponentiation
Time: O(log n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "mod_power.h"

unsigned int mod_power(unsigned long long x, unsigned int n, unsigned int m) {
	unsigned int y = 1;
	while (n) {
		if (n & 1)
			y = (y * x) % m;
		n >>= 1;
		x = (x * x) % m;
	}
	return y;
}

unsigned int mod_power_recursive(unsigned int x, unsigned int n, unsigned int m) {
	if (n == 0)
		return 1;
	unsigned long long y = mod_power_recursive(x, n / 2, m);
	y = (y * y) % m;
	if (n & 1)
		y = (y * x) % m;
	return y;
}
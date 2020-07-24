/*
Algorithm: Modular Multiplicative Inverse
Time: O(log m)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "mod_inverse.h"

int mod_inverse(int a, int m) {
	// base cases
	if (m <= 0 || m == 1)
		return -1;
	
	// extended euclidean algorithm
	int q, t = 0, t1 = 1, n = m;
	while (m != 0) {
		q  = a / m;
		a  = std::exchange(m, a % m);
		t1 = std::exchange(t, t1 - q * t);
	}
	t1 = (t1 % n + n) % n;
	return (a == 1) ? t1 : -1;
}
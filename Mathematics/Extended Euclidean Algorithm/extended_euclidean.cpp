/*
Algorithm: Extended Euclidean Algorithm
Time Complexity: O(log(a + b))
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "extended_euclidean.h"

std::pair<int, int> extended_euclidean(int a, int b) {
	int q, s = 1, s1 = 0, t = 0, t1 = 1;
	while (b != 0) {
		q  = a / b;
		a  = std::exchange(b, a % b);
		s = std::exchange(s1, s - q * s1);
		t = std::exchange(t1, t - q * t1);
	}
	return {s, t};
}

std::pair<int, int> extended_euclidean_recursive(int a, int b, int s, int s1, int t, int t1) {
	if (b == 0)
		return {s, t};
	int q = a / b;
	return extended_euclidean_recursive(b, a % b, s1, s - q * s1, t1, t - q * t1);
}

std::pair<int, int> extended_euclidean_recursive(int a, int b) {
	return extended_euclidean_recursive(a, b, 1, 0, 0, 1);
}
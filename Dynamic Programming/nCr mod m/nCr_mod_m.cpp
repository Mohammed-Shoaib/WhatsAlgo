/*
Algorithm: nCr mod m
Time: O(n • r)
Space: O(r)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "nCr_mod_m.h"

int nCr_mod_m(int n, int r, int m) {
	int dp[r + 1] = {};
	dp[0] = m > 1;

	// base cases
	if (r == 0 || r == n)
		return dp[0];

	// dynamic programming
	for (int i = 1; i <= n; i++)
		for (int j = r; j > 0; j--)
			dp[j] = (dp[j - 1] + dp[j]) % m;

	return dp[r];
}
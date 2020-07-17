/*
Algorithm: Longest Common Subsequence
Time: O(m • n)
Space: O(m • n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "lcs.h"

int lcs(const std::string& s1, const std::string& s2) {
	int m, n;
	m = s1.length();
	n = s2.length();
	int dp[m + 1][n + 1] = {};

	// dynamic programming
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++) {
			if (s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
		}

	return dp[m][n];
}
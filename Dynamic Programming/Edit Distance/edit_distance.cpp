/*
Algorithm: Edit Distance
Time: O(m • n)
Space: O(m • n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "edit_distance.h"

int edit_distance(const std::string& s1, const std::string& s2) {
	int m, n;
	m = s1.length();
	n = s2.length();
	int dp[m + 1][n + 1];
	
	// base cases
	dp[0][0] = 0;
	for (int i = 1; i <= m; i++)
		dp[i][0] = i;
	for (int i = 1; i <= n; i++)
		dp[0][i] = i;

	// dynamic programming
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			// levenshtein distance
			dp[i][j] = std::min({dp[i][j - 1] + 1,
								 dp[i - 1][j] + 1,
								 dp[i - 1][j - 1] + (s1[i - 1] != s2[j - 1])});

	return dp[m][n];
}
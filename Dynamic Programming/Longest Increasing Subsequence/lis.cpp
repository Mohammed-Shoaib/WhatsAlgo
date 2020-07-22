/*
Algorithm: Longest Increasing Subsequence
Time: O(n • log n)
Space: O(n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "lis.h"

int lis(const std::vector<int>& a) {
	std::vector<int> lis;

	// binary search
	for (auto& x: a) {
		auto it = std::lower_bound(lis.begin(), lis.end(), x);
		if (it == lis.end())
			lis.push_back(x);
		else
			*it = x;
	}
	
	return lis.size();
}

// Time: O(n²)
int lis_dynamic_programming(const std::vector<int>& a) {
	int max_len = 0, n = a.size();
	std::vector<int> dp(n, 1);
	
	// dynamic programming
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)
			if (a[j] < a[i])
				dp[i] = std::max(dp[j] + 1, dp[i]);
		max_len = std::max(dp[i], max_len);
	}
	
	return max_len;
}
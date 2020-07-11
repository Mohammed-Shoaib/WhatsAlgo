/*
Algorithm: Coin Change
Time: O(n • c)
Space: O(n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "coin_change.h"

int coin_change(int target, const std::vector<int>& coins) {
	// base case
	if (target == 0)
		return 1;
	std::vector<int> dp(target + 1, INF);
	dp[0] = 0;
	for (int i = 1; i <= target; i++)
		for (auto& coin: coins)
			if (i - coin >= 0)
				dp[i] = std::min(dp[i - coin] + 1, dp[i]);
	return (dp[target] != INF) ? dp[target] : -1;
}
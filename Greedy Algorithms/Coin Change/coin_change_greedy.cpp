/*
Algorithm: Coin Change
Time: O(c)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "coin_change_greedy.h"

int coin_change_greedy(int target, const std::vector<int>& coins) {
	// base case
	if (target == 0)
		return 1;
	
	int cnt = 0, c = coins.size();
	
	for (int i = c - 1; i >= 0; i--)
		if (target >= coins[i]) {
			cnt += target / coins[i];
			target -= (target / coins[i]) * coins[i];
		}
	
	return (target == 0) ? cnt : -1;
}
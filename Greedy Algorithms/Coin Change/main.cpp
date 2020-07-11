#include <iostream>
#include <algorithm>
#include "coin_change_greedy.h"

int main() {
	int n, target;
	std::cin >> n >> target;
	std::vector<int> coins(n);
	for (int i = 0; i < n; i++)
		std::cin >> coins[i];
	std::cout << coin_change_greedy(target, coins);
	return 0;
}
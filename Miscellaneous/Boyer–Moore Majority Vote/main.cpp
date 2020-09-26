#include <iostream>
#include "majority.h"

int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> m, nums(n);
	for (int& x: nums)
		std::cin >> x;
	m = majority(k, nums);
	std::sort(m.begin(), m.end());
	for (int& x: m)
		std::cout << x << " ";
	return 0;
}
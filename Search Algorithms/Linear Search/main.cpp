#include <iostream>
#include "linear_search.h"

int main() {
	int n, target;
	std::cin >> n >> target;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::cout << linear_search(target, a);
	return 0;
}
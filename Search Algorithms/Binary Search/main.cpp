#include <iostream>
#include "binary_search.h"

int main() {
	int n, target;
	std::cin >> n >> target;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::cout << binary_search(target, a);
	return 0;
}
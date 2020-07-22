#include <iostream>
#include "lis.h"

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::cout << lis(a);
	return 0;
}
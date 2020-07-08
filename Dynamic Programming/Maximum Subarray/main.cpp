#include <iostream>
#include "maximum_subarray.h"

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0 ; i < n ; i++)
		std::cin >> a[i];
	std::cout << maximum_subarray(a);
	return 0;
}
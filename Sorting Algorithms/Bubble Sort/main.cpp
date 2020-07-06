#include <iostream>
#include "bubble_sort.h"

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	bubble_sort(a);
	for (int i = 0; i < n; i++)
		std::cout << a[i] << " ";
	return 0;
}
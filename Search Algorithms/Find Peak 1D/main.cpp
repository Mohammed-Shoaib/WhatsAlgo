#include <iostream>
#include "find_peak.h"

bool verify(int i, const std::vector<int>& a) {
	int n = a.size();
	bool ok = true;

	if (i < 0 || i >= n)
		return false;
	if (i > 0)
		ok &= a[i] >= a[i - 1];
	if (i + 1 < n)
		ok &= a[i] >= a[i + 1];
	
	return ok;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::cout << verify(find_peak(a), a);
	return 0;
}
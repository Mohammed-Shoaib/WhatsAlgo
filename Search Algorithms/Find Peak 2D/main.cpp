#include <iostream>
#include "find_peak_2d.h"

bool verify(const std::pair<int, int>& pos, const std::vector<std::vector<int>>& a) {
	int m, n, i, j;
	m = a.size();
	n = a[0].size();
	i = pos.first;
	j = pos.second;
	bool ok = true;

	if (i < 0 || i >= m || j < 0 || j >= n)
		return false;
	if (i > 0)
		ok &= a[i][j] >= a[i - 1][j];
	if (i + 1 < n)
		ok &= a[i][j] >= a[i + 1][j];
	if (j > 0)
		ok &= a[i][j] >= a[i][j - 1];
	if (j + 1 < n)
		ok &= a[i][j] >= a[i][j + 1];
	
	return ok;
}

int main() {
	int m, n;
	std::cin >> m >> n;
	std::vector<std::vector<int>> a(m, std::vector<int>(n));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			std::cin >> a[i][j];
	std::cout << verify(find_peak_2d(a), a);
	return 0;
}
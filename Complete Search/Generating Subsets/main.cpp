#include <iostream>
#include <algorithm>
#include "generate_subsets.h"

int main() {
	int n;
	std::cin >> n;
	
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	
	std::vector<std::vector<int>> subsets = generate_subsets(a);
	
	std::sort(subsets.begin(), subsets.end(), [&](auto& l, auto& r) {
		if (l.size() == r.size())
			return l < r;
		else
			return l.size() < r.size();
	});

	for (int i = 0; i < subsets.size(); i++) {
		for (int j = 0; j < subsets[i].size(); j++)
			std::cout << subsets[i][j] << " ";
		std::cout << std::endl;
	}
	
	return 0;
}
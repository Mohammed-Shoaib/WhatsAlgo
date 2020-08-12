/*
Algorithm: Generating Subsets
Time: O(n • 2ⁿ)
Space: O(n • 2ⁿ)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "generate_subsets.h"

std::vector<std::vector<int>> generate_subsets(const std::vector<int>& a) {
	int n = a.size();
	std::vector<std::vector<int>> subsets(1 << n);

	for (int b = 0; b < subsets.size(); b++)
		for (int i = 0; i < n; i++)
			if ((b >> i) & 1)
				subsets[b].push_back(a[i]);
	
	return subsets;
}

void generate_subsets_recursive(int pos, const std::vector<int>& a, std::vector<int>& subset, std::vector<std::vector<int>>& subsets) {
	subsets.push_back(subset);
	for (int i = pos; i < a.size(); i++) {
		subset.push_back(a[i]);
		generate_subsets_recursive(i + 1, a, subset, subsets);
		subset.pop_back();
	}
}

std::vector<std::vector<int>> generate_subsets_recursive(const std::vector<int>& a) {
	std::vector<int> subset;
	std::vector<std::vector<int>> subsets;
	generate_subsets_recursive(0, a, subset, subsets);
	return subsets;
}
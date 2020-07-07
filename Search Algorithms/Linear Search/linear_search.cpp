/*
Algorithm: Linear Search
Time: O(n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "linear_search.h"

int linear_search(int target, const std::vector<int>& a) {
	int n = a.size();
	for (int i = 0; i < n; i++)
		if (a[i] == target)
			return i;
	return -1;
}
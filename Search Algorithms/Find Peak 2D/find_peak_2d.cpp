/*
Algorithm: Find Peak 2D
Time: O(n log m)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "find_peak_2d.h"

std::pair<int, int> find_peak_2d(const std::vector<std::vector<int>>& a) {
	int pos, mid, low = 0, high = a.size() - 1;
	while (low < high) {
		mid = low + (high - low) / 2;
		pos = distance(a[mid].begin(), max_element(a[mid].begin(), a[mid].end()));
		if (a[mid][pos] >= a[mid + 1][pos])
			high = mid;
		else
			low = mid + 1;
	}
	pos = distance(a[high].begin(), max_element(a[high].begin(), a[high].end()));
	return {high, pos};
}
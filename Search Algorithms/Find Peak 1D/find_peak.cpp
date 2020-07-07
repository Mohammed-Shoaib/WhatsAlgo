/*
Algorithm: Find Peak 1D
Time: O(log n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "find_peak.h"

int find_peak(const std::vector<int>& a) {
	int mid, low = 0, high = a.size() - 1;
	while (low < high) {
		mid = low + (high - low) / 2;
		if (a[mid] >= a[mid + 1])
			high = mid;
		else
			low = mid + 1;
	}
	return high;
}
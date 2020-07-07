/*
Algorithm: Binary Search
Time: O(log n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "binary_search.h"

int binary_search(int target, const std::vector<int>& a) {
	int mid, low = 0, high = (int) a.size() - 1;
	
	while (low <= high) {
		mid = low + (high - low) / 2;
		if (a[mid] == target)
			return mid;
		else if (a[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	
	return -1;
}
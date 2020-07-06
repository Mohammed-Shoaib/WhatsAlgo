/* 
Algorithm: Selection Sort
Time: O(n²)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "selection_sort.h"

void selection_sort(std::vector<int>& a) {
	int n = a.size();
	for (int i = 0; i < n - 1; i++) {
		int pos = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[pos])
				pos = j;
		std::swap(a[i], a[pos]);
	}
}
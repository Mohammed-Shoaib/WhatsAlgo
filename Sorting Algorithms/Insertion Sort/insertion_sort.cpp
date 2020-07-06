/*
Algorithm: Insertion Sort
Time: O(n²)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "insertion_sort.h"

void insertion_sort(std::vector<int>& a) {
	int key, n = a.size();
	for (int j, i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0 && key < a[j]; j--)
			a[j + 1] = a[j];
		a[j + 1] = key;
	}
}
/*
Algorithm: Bubble Sort
Time: O(n²)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "bubble_sort.h"

void bubble_sort(std::vector<int>& a) {
	int n = a.size();
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
				std::swap(a[j], a[j + 1]);
}
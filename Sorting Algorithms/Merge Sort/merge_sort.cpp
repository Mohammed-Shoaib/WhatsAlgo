/*
Algorithm: Merge Sort
Time: O(n log n)
Space: O(n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "merge_sort.h"

void merge(int l, int m, int r, std::vector<int>& a) {
	int i = l, j = m + 1, k = 0;
	std::vector<int> temp(r - l + 1);
	
	while (i <= m && j <= r) {
		if (a[i] < a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}

	while (i <= m)
		temp[k++] = a[i++];

	while (j <= r)
		temp[k++] = a[j++];

	for (i = l; i <= r; i++)
		a[i] = temp[i - l];
}

void merge_sort(int l, int r, std::vector<int>& a) {
	if (l >= r)
		return;
	int m = (l + r) / 2;
	merge_sort(l, m, a);
	merge_sort(m + 1, r, a);
	merge(l, m, r, a);
}
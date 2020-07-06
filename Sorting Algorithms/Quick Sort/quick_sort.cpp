/*
Algorithm: Quick Sort
Time: O(n²)
Space: O(log n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "quick_sort.h"

int hoare_partition(int low, int high, std::vector<int>& a) {
	int i, j, pivot;
	i = low - 1;
	j = high + 1;
	pivot = a[(low + high) / 2];

	while(true) {
		do
			i++;
		while (a[i] < pivot);
		do
			j--;
		while (a[j] > pivot);
		if (i >= j)
			return j;
		else
			std::swap(a[i], a[j]);
	}
}

int lomuto_partition(int low, int high, std::vector<int>& a) {
	int i = low, pivot = a[high];
	for (int j = low; j < high; j++)
		if (a[j] < pivot) {
			std::swap(a[i], a[j]);
			i++;
		}
	std::swap(a[i], a[high]);
	return i;
}

void quick_sort(int low, int high, std::vector<int>& a) {
	if (low >= high)
		return;
	int p = lomuto_partition(low, high, a);
	quick_sort(low, p - 1, a);		// for hoare_partition: quick_sort(low, p, a)
	quick_sort(p + 1, high, a);
}
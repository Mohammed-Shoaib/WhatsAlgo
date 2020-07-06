/*
Algorithm: Counting Sort
Time: O(n + k)
Space: O(k)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "counting_sort.h"

void counting_sort(std::vector<int>& a) {
	int mn, mx, k;
	mn = *std::min_element(a.begin(), a.end());
	mx = *std::max_element(a.begin(), a.end());
	k = mx - mn + 1;
	std::vector<int> freq(k);

	for (int& x: a)
		freq[x - mn]++;
	
	for (int i = 0, j = 0; i < k; i++)
		while (freq[i]) {
			a[j++] = mn + i;
			freq[i]--;
		}
}
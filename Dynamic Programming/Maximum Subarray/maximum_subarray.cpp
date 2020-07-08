/*
Algorithm: Maximum Subarray
Time: O(n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "maximum_subarray.h"

int maximum_subarray(const std::vector<int>& a) {
	// kadane's algorithm
	int sum, max_sum;
	sum = max_sum = 0;
	for (int i = 0 ; i < a.size() ; i++) {
		sum = std::max(a[i], a[i] + sum);
		max_sum = std::max(sum, max_sum);
	}
	return max_sum;
}

/*
Approach: Divide & Conquer
Time: O(n log n)
Space: O(log n)
*/
int maximum_subarray_divide_conquer(int l, int r, const std::vector<int>& a) {
	// base cases
	if (l > r)
		return 0;
	else if (l == r)
		return std::max(0, a[l]);
	
	int mid, max_l, max_r;
	mid = l + (r - l) / 2;
	max_l = max_r = 0;
	
	// maximum cumulative sum in the left subarray
	for (int sum = 0, i = mid; i >= l; i--) {
		sum += a[i];
		max_l = std::max(sum, max_l);
	}

	// maximum cumulative sum in the right subarray
	for (int sum = 0, i = mid + 1; i <= r; i++) {
		sum += a[i];
		max_r = std::max(sum, max_r);
	}
	
	return std::max({max_l + max_r, maximum_subarray_divide_conquer(l, mid, a), maximum_subarray_divide_conquer(mid + 1, r, a)});
}
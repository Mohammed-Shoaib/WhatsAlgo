/*
Algorithm: Find Peak 2D
Time: O(m + n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "find_peak_2d.h"

std::pair<int, int> find_peak_2d(const std::vector<std::vector<int>>& a) {
	int pos, mx, mid, low_row, high_row, low_col, high_col;
	low_row = low_col = 0;
	high_row = a.size() - 1;
	high_col = a[0].size() - 1;

	while (low_row < high_row || low_col < high_col) {
		mx = std::numeric_limits<int>::min();

		// range of rows is larger than range of cols
		if (high_row - low_row >= high_col - low_col) {
			mid = low_row + (high_row - low_row) / 2;

			// get position of the maximum element along row
			for (int i = low_col; i <= high_col; i++)
				if (mx < a[mid][i]) {
					mx = a[mid][i];
					pos = i;
				}
			
			if (a[mid][pos] >= a[mid + 1][pos])
				high_row = mid;
			else
				low_row = mid + 1;

		} else {
			mid = low_col + (high_col - low_col) / 2;

			// get position of the maximum element along col
			for (int i = low_row; i <= high_row; i++)
				if (mx < a[i][mid]) {
					mx = a[i][mid];
					pos = i;
				}
			
			if (a[pos][mid] >= a[pos][mid + 1])
				high_col = mid;
			else
				low_col = mid + 1;

		}
	}

	return {high_row, high_col};
}

std::pair<int, int> find_peak_2d_logarithmic(const std::vector<std::vector<int>>& a) {
	// O(n log m)
	int pos, mid, low = 0, high = a.size() - 1;
	while (low < high) {
		mid = low + (high - low) / 2;
		pos = std::distance(a[mid].begin(), std::max_element(a[mid].begin(), a[mid].end()));
		if (a[mid][pos] >= a[mid + 1][pos])
			high = mid;
		else
			low = mid + 1;
	}
	pos = std::distance(a[high].begin(), std::max_element(a[high].begin(), a[high].end()));
	return {high, pos};
}
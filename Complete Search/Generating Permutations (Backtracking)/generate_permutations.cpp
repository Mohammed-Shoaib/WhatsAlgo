/*
Algorithm: Generating Permutations (Backtracking)
Time Complexity: O(n * n!)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <algorithm>

void generate_permutations(int start, int end, std::vector<int>& arr) {
	if (start == end) {
		for (int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
		return;
	}
	for (int i = start; i <= end; i++) {
		std::swap(arr[start], arr[i]);
		generate_permutations(start + 1, end, arr);
		std::swap(arr[start], arr[i]);
	}
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> arr(n);
	for (int i = 0; i < n; i++)
		std::cin >> arr[i];
	generate_permutations(0, n - 1, arr);
	return 0;
}
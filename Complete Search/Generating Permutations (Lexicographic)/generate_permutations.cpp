/*
Algorithm: Generating Permutations (Lexicographic)
Time Complexity: O(n * n!)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <algorithm>

bool next_permutation(std::vector<int>& arr) {
	int i, j, n = arr.size();
	
	for (i = n - 2; i >= 0; i--)
		if (arr[i] < arr[i + 1])
			break;
	
	if (i < 0)
		return false;

	for (j = n - 1; j > i; j--)
		if (arr[i] < arr[j])
			break;
	
	std::swap(arr[i], arr[j]);
	std::reverse(arr.begin() + i + 1, arr.end());
	
	return true;
}

void generate_permutations(std::vector<int>& arr) {
	int n = arr.size();
	std::sort(arr.begin(), arr.end());
	do {
		for (int i = 0; i < n; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	} while(next_permutation(arr));
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> arr(n);
	for (int i = 0; i < n; i++)
		std::cin >> arr[i];
	generate_permutations(arr);
	return 0;
}
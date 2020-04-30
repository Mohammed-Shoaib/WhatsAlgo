/*
Algorithm: Kadane's Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <algorithm>

int kadane(std::vector<int> &arr) {
	int sum, max_sum;
	sum = max_sum = 0;
	for (int i = 0 ; i < arr.size() ; i++) {
		sum = std::max(arr[i], arr[i] + sum);
		if (sum > max_sum)
			max_sum = sum;
	}
	return max_sum;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> arr(n);
	for (int i = 0 ; i < n ; i++)
		std::cin >> arr[i];
	std::cout << kadane(arr);
	return 0;
}
/*
Algorithm: Binary Search
Time Complexity: O(logn)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binary_search(int low, int high, int key, vector<int> &a) {
	int mid = (low + high) / 2;
	if (low > high)
		return false;
	else if (a[mid] == key)
		return true;
	else if (a[mid] < key)
		return binary_search(mid + 1, high, key, a);
	else
		return binary_search(low, mid - 1, key, a);
}

int main() {
	int n, key;
	cin >> n >> key;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	cout << binary_search(0, n - 1, key, a);
    return 0;
}
/*
Algorithm: Linear Search
Time Complexity: O(n)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>

using namespace std;

bool linear_search(int key, vector<int> &a) {
	int n = a.size();
	for (int i = 0; i < n; i++)
		if (a[i] == key)
			return true;
	return false;
}

int main() {
	int n, key;
	cin >> n >> key;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << linear_search(key, a);
    return 0;
}
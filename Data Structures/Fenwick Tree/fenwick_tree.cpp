/*
Data Structure: Fenwick Tree (Binary Indexed Tree)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
Space Complexity: O(n)

| Operations        | Time      | Space |
|-------------------|-----------|-------|
| FenwickTree(nums) | O(nlogn)  | O(1)  |
| LSB(x)            | O(1)      | O(1)  |
| add(i, val)       | O(logn)   | O(1)  |
| rsq(i)            | O(logn)   | O(1)  |
| rsq(i, j)         | O(logn)   | O(1)  |
*/

#include <vector>

class FenwickTree {
private:
	std::vector<int> ft;
public:
	FenwickTree(int n) : ft(n + 1) {}

	FenwickTree(const std::vector<int>& nums) : ft(nums.size() + 1) {
		// initialization
		for (int i = 0; i < nums.size(); i++)
			add(i + 1, nums[i]);
	}

	int LSB(int x) {
		// get the lowest set bit
		return x & (-x);
	}

	void add(int i, int val) {
		// add val to position i
		while (i < ft.size()) {
			ft[i] += val;
			i += LSB(i);
		}
	}

	void update(int i, int val) {
		// update value at position i to val
		add(i, val - rsq(i, i));
	}

	int rsq(int i) {
		// sum of elements in the range [1, i]
		int sum = 0;
		while (i) {
			sum += ft[i];
			i -= LSB(i);
		}
		return sum;
	}

	int rsq(int i, int j) {
		// sum of elements in the range [i, j]
		return rsq(j) - rsq(i - 1);
	}
};
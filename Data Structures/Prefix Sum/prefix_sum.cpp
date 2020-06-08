/*
Data Structure: Prefix Sum
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
Space Complexity: O(n)

| Operations            | Time  | Space |
|-----------------------|-------|-------|
| PrefixSum(nums)       | O(n)  | O(1)  |
| rsq(l, r)             | O(1)  | O(1)  |
*/

#include <vector>
#include <numeric>

class PrefixSum {
private:
	std::vector<int> prefix;
public:
	PrefixSum(const std::vector<int>& nums) : prefix(nums.size() + 1) {
		// construct prefix sum
		std::partial_sum(nums.begin(), nums.end(), prefix.begin() + 1);
	}

	int rsq(int l, int r) {
		// compute sum for the range [l, r]
		return prefix[r + 1] - prefix[l];
	}
};
/*
Algorithm: Boyer–Moore Majority Vote
Time: O(n • k)
Space: O(k)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "majority.h"

std::vector<int> majority(int k, const std::vector<int>& nums) {
	int n = nums.size();
	std::vector<int> m;
	std::unordered_map<int, int> cnt;
	
	for (const int& x: nums) {
		if (cnt.size() < k - 1 || cnt.count(x)) {
			cnt[x]++;
			continue;
		}
		auto it = cnt.begin();
		while (it != cnt.end()) {
			if (--it->second == 0)
				it = cnt.erase(it);
			else
				++it;
		}
	}
	
	for (auto& [key, val]: cnt)
		if (std::count(nums.begin(), nums.end(), key) > n / k)
			m.push_back(key);
	
	return m;
}
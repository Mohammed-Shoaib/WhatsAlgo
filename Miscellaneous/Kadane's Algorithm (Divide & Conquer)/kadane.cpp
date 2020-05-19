/*
Algorithm: Kadane's Algorithm (Divide & Conquer)
Time Complexity: O(nlogn)
Space Complexity: O(logn)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <vector>
#include <algorithm>

int kadane(int l, int r, const std::vector<int>& nums) {
    // base cases
    if (r - l == 0)
        return 0;
    else if (r - l == 1)
        return std::max(0, nums[l]);
    
    int mid, max_l, max_r;
    mid = (l + r) / 2;
    max_l = max_r = 0;
    
    // maximum cumulative sum in the left subarray
    for (int sum = 0, i = mid - 1; i >= l; i--) {
        sum += nums[i];
        max_l = std::max(sum, max_l);
    }

    // maximum cumulative sum in the right subarray
    for (int sum = 0, i = mid; i < r; i++) {
        sum += nums[i];
        max_r = std::max(sum, max_r);
    }
    
    return std::max({max_l + max_r, max_subarray(l, mid, nums), max_subarray(mid, r, nums)});
}

int kadane(const std::vector<int>& nums) {
    return max_subarray(0, nums.size(), nums);
}
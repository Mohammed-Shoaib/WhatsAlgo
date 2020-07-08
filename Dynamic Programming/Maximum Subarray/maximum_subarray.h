#pragma once
#include <vector>
#include <algorithm>

int maximum_subarray(const std::vector<int>& a);
int maximum_subarray_divide_conquer(int l, int r, const std::vector<int>& a);
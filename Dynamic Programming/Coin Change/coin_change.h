#pragma once
#include <vector>
#include <limits>
#include <algorithm>

const int INF = std::numeric_limits<int>::max() - 1;
int coin_change(int target, const std::vector<int>& coins);
#pragma once
#include <vector>
#include <limits>
#include <utility>
#include <iterator>
#include <algorithm>

std::pair<int, int> find_peak_2d(const std::vector<std::vector<int>>& a);
std::pair<int, int> find_peak_2d_logarithmic(const std::vector<std::vector<int>>& a);
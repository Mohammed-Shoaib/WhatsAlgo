#pragma once
#include <vector>
#include <numeric>
#include <utility>
#include <algorithm>

class UnionFind {
private:
	int m_components;
	std::vector<int> link, size;
public:
	UnionFind(int n);
	int components();
	int find(int x);
	bool same(int a, int b);
	void unify(int a, int b);
};
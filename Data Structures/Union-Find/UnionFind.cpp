/*
Data Structure: Union-Find
Space: O(n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib

|---------------|--------------------------|-------|
| Operations    | Time                     | Space |
|---------------|--------------------------|-------|
| components()  | O(1)                     | O(1)  |
| find(x)       | O(log n), amortized O(1) | O(1)  |
| same(a, b)    | O(log n), amortized O(1) | O(1)  |
| unify(a, b)   | O(log n), amortized O(1) | O(1)  |
|---------------|--------------------------|-------|
*/

#include "UnionFind.h"

UnionFind::UnionFind(int n) : m_components(n), link(n), size(n, 1) {
	std::iota(link.begin(), link.end(), 0);
}

int UnionFind::components() {
	return m_components;
}

int UnionFind::find(int x) {
	int y = x;
	// find the root of component
	while (x != link[x])
		x = link[x];
	// path compression
	while (y != x)
		y = std::exchange(link[y], x);
	return x;
}

bool UnionFind::same(int a, int b) {
	return find(a) == find(b);
}

void UnionFind::unify(int a, int b) {
	a = find(a);
	b = find(b);
	
	if (a == b)	// belong to the same component
		return;
	else if (size[a] < size[b])	// merge the two separate components
		std::swap(a, b);
	
	link[b] = a;
	size[a] += size[b];
	m_components--;
}
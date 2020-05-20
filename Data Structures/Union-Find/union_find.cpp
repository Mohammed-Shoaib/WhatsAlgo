/*
Data Structure: Union-Find
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
Space Complexity: O(n)

| Operations    | Time                     | Space |
|---------------|--------------------------|-------|
| find(x)       | amortized O(1), O(log n) | O(1)  |
| same(a, b)    | amortized O(1), O(log n) | O(1)  |
| unify(a, b)   | amortized O(1), O(log n) | O(1)  |
| components()  | O(1)                     | O(1)  |
*/

#include <vector>
#include <utility>
#include <numeric>
#include <algorithm>

class UnionFind {
private:
	int m_components;
	std::vector<int> link, size;
public:
	UnionFind(int n) : m_components(n), link(n), size(n, 1) {
		std::iota(link.begin(), link.end(), 0);
	}

	int find(int x) {
		int y = x;
		// find the root of component
		while (x != link[x])
			x = link[x];
		// path compression
		while (y != x)
			y = std::exchange(link[y], x);
		return x;
	}

	bool same(int a, int b) {
		return find(a) == find(b);
	}

	void unify(int a, int b) {
		a = find(a);
		b = find(b);
		// belong to the same component
		if (a == b)
			return;
		// merge the two separate components
		if (size[a] < size[b])
			std::swap(a, b);
		link[b] = a;
		size[a] += size[b];
		m_components--;
	}

	int components() {
		return m_components;
	}
};
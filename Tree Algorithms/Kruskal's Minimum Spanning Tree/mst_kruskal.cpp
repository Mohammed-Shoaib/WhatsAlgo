/*
Algorithm: Kruskal's Minimum Spanning Tree
Time: O(E • log E)
Space: O(V + E)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "mst_kruskal.h"

int mst_kruskal(int n, std::vector<std::vector<int>> edges) {
	int cost = 0;
	UnionFind dsu(n);

	// sort edges by weight
	std::sort(edges.begin(), edges.end(), [](std::vector<int>& l, std::vector<int>& r) {
		return l[2] < r[2];
	});

	// construct MST using Union-Find set
	for (std::vector<int>& e: edges) {
		int u, v, w;
		std::tie(u, v, w) = {e[0], e[1], e[2]};
		if (!dsu.same(u, v)) {
			dsu.unify(u, v);
			cost += w;
		}
	}

	return cost;
}
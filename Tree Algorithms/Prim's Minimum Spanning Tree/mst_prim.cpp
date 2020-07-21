/*
Algorithm: Prim's Minimum Spanning Tree
Time: O(E • log E)
Space: O(V + E)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "mst_prim.h"

int mst_prim(const std::vector<std::vector<std::pair<int, int>>>& adj) {
	int cost = 0, n = adj.size();
	std::vector<int> visited(n);
	std::priority_queue<std::pair<int, int>,
						std::vector<std::pair<int, int>>,
						std::greater<std::pair<int, int>>
	> pq;

	std::function<void(int)> process = [&](int s) {
		visited[s] = true;
		for (auto& u: adj[s])
			if (!visited[u.first])
				pq.push({u.second, u.first});
	};

	process(0);
	while (!pq.empty()) {
		int w, s;
		std::tie(w, s) = pq.top();
		pq.pop();
		if (!visited[s]) {
			process(s);
			cost += w;
		}
	}

	return cost;
}
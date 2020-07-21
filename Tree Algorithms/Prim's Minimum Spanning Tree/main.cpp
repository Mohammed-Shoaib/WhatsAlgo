#include <iostream>
#include "mst_prim.h"

int main() {
	int v, e;
	std::cin >> v >> e;
	std::vector<std::vector<std::pair<int, int>>> adj(v);
	while (e--) {
		int a, b, w;
		std::cin >> a >> b >> w;
		adj[a].emplace_back(b, w);
		adj[b].emplace_back(a, w);
	}
	std::cout << mst_prim(adj);
	return 0;
}
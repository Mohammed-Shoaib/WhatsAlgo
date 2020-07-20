#include <iostream>
#include "mst_kruskal.h"

int main() {
	int v, e;
	std::cin >> v >> e;
	std::vector<std::vector<int>> edges(e, std::vector<int>(3));
	for (int i = 0; i < e; i++)
		for (int j = 0; j < edges[i].size(); j++)
			std::cin >> edges[i][j];
	std::cout << mst_kruskal(v, edges);
	return 0;
}
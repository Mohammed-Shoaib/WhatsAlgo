#include <iostream>
#include "extended_euclidean.h"

int main() {
	int a, b;
	std::cin >> a >> b;
	std::pair<int, int> res = extended_euclidean(a, b);
	std::cout << res.first << " " << res.second;
}
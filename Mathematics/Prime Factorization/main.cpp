#include <iostream>
#include "prime_factorization.h"

int main() {
	unsigned int n;
	std::cin >> n;
	std::vector<std::pair<unsigned int, unsigned int>> f = prime_factorization(n);
	std::cout << f.size() << '\n';
	for (auto& [p, e]: f)
		std::cout << p << " " << e << '\n';
	return 0;
}
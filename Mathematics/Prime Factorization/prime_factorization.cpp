/*
Algorithm: Prime Factorization
Time: O(√n)
Space: O(log n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "prime_factorization.h"

std::vector<std::pair<unsigned int, unsigned int>> prime_factorization(unsigned int n) {
	std::vector<std::pair<unsigned int, unsigned int>> f;
	
	for (unsigned int i = 2; i * i <= n; i++)
		if (n % i == 0) {
			f.push_back({i, 0});
			while (n % i == 0) {
				++f.back().second;
				n /= i;
			}
		}
	if (n > 1)
		f.push_back({n, 1});
	
	return f;
}
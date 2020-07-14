/*
Algorithm: nCr mod p
Time: O(n)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "nCr_mod_p.h"

int nCr_mod_p(int n, int r, int p) {
	long long fact_n, inv_r, inv_nr;
	fact_n = inv_r = inv_nr = 1;

	// compute factorial
	for (int i = 1; i <= n; i++) {
		fact_n = (fact_n * i) % p;
		if (i == r)
			inv_r = fact_n;
		if (i == n - r)
			inv_nr = fact_n;
	}

	// compute inverse factorial using fermat's theorem
	inv_r = mod_power(inv_r, p - 2, p);
	inv_nr = mod_power(inv_nr, p - 2, p);
	
	return ((fact_n * inv_r) % p * inv_nr) % p;
}
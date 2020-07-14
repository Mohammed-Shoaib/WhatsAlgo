#include <iostream>
#include "nCr_mod_p.h"

int main() {
	int n, r, p;
	std::cin >> n >> r >> p;
	std::cout << nCr_mod_p(n, r, p);
}
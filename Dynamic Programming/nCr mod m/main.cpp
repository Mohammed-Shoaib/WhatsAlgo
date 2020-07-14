#include <iostream>
#include "nCr_mod_m.h"

int main() {
	int n, r, m;
	std::cin >> n >> r >> m;
	std::cout << nCr_mod_m(n, r, m);
}
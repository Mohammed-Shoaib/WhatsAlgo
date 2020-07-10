#include <iostream>
#include "mod_power.h"

int main() {
	int x, n, m;
	std::cin >> x >> n >> m;
	std::cout << mod_power(x, n, m);
	return 0;
}
#include <iostream>
#include "mod_inverse.h"

int main() {
	int a, m;
	std::cin >> a >> m;
	std::cout << mod_inverse(a, m);
	return 0;
}
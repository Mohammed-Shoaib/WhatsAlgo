#include <iostream>
#include <iomanip>
#include "power.h"

int main() {
	int x, n;
	std::cin >> x >> n;
	std::cout << std::fixed << std::setprecision(6) << power(x, n);
	return 0;
}
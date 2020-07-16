#include <iostream>
#include <iomanip>
#include "power.h"

int main() {
	int n;
	double x;
	std::cin >> x >> n;
	std::cout << std::fixed << std::setprecision(6) << power(x, n);
	return 0;
}
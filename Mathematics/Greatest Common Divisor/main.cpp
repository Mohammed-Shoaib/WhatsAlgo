#include <iostream>
#include "gcd.h"

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << gcd(a, b);
	return 0;
}
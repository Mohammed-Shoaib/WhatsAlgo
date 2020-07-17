#include <iostream>
#include "lcs.h"

int main() {
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << lcs(s1, s2);
	return 0;
}
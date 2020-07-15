#include <iostream>
#include "edit_distance.h"

int main() {
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << edit_distance(s1, s2);
	return 0;
}
#include <iostream>
#include "KnuthMorrisPratt.h"

int main() {
	std::string pat, text;
	std::cin >> pat >> text;
	KnuthMorrisPratt kmp(pat);
	std::vector<int> matches = kmp.search(text);
	for (int& match: matches)
		std::cout << match << " ";
	return 0;
}
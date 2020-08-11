#pragma once
#include <string>
#include <vector>

class KnuthMorrisPratt {
private:
	int n;
	std::string pat;
	std::vector<int> pi;
public:
	KnuthMorrisPratt(const std::string& pat);
	std::vector<int> search(const std::string& text);
};
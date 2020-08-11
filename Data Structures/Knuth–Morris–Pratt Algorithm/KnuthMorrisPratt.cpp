/*
Data Structure: Knuth–Morris–Pratt Algorithm
Space: O(n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib

|-----------------------|----------|-------|
| Operations            | Time     | Space |
|-----------------------|----------|-------|
| KnuthMorrisPratt(pat) | O(n)     | O(1)  |
| search(text)          | O(m + n) | O(1)  |
|-----------------------|----------|-------|
*/

#include "KnuthMorrisPratt.h"

KnuthMorrisPratt::KnuthMorrisPratt(const std::string& pat) : n(pat.length()), pat(pat), pi(n) {
	// prefix function
	for (int i = 1, j = 0; i < n; i++) {
		while (j > 0 && pat[i] != pat[j])
			j = pi[j - 1];
		if (pat[i] == pat[j])
			j++;
		pi[i] = j;
	}
}

std::vector<int> KnuthMorrisPratt::search(const std::string& text) {
	int m = text.length();
	std::vector<int> matches;
	
	for (int i = 0, j = 0; i < m; i++) {
		while (j > 0 && text[i] != pat[j])
			j = pi[j - 1];
		if (text[i] == pat[j])
			j++;
		if (j == n) {
			j = pi[j - 1];
			matches.push_back(i - n + 1);
		}
	}

	return matches;
}
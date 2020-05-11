/*
Data Structure: Trie
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
Space Complexity: O(len • words)

| Operations          | Time      | Space |
|---------------------|-----------|-------|
| insert(word)        | O(len)    | O(1)  |
| search(word)        | O(len)    | O(1)  |
| starts_with(prefix) | O(len)    | O(1)  |
*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class TrieNode {
public:
	int words;
	std::unordered_map<char, TrieNode*> children;
	TrieNode() : words(0) {}
};

class Trie {
private:
	TrieNode* root;
public:
	Trie() : root(new TrieNode()) {}

	void insert(const std::string& word) {
		TrieNode* node = root;
		for (const char& c: word) {
			if (!node->children.count(c))
				node->children[c] = new TrieNode();
			node = node->children[c];
		}
		node->words++;
	}

	bool search(const std::string& word) {
		TrieNode* node = root;
		for (const char& c: word) {
			if (!node->children.count(c))
				return false;
			node = node->children[c];
		}
		return node->words;
	}

	bool starts_with(const std::string& prefix) {
		TrieNode* node = root;
		for (const char& c: prefix) {
			if (!node->children.count(c))
				return false;
			node = node->children[c];
		}
		return node;
	}
};
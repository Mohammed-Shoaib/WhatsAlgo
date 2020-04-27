/*
Data Structure: Least Recently Used Cache
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
Space Complexity: O(n)

| Operations      | Time | Space |
|-----------------|------|-------|
| get(key)        | O(1) | O(1)  |
| put(key, value) | O(1) | O(1)  |
*/

#include <list>
#include <unordered_map>

class Node {
public:
	int key, val;
	Node(int key, int val) : key(key), val(val) {} 
};

class LRUCache {
private:
	int capacity;
	std::list<Node> cache;
	std::unordered_map<int, std::list<Node>::iterator> m;
public:
	LRUCache(int capacity) : capacity(capacity) {}
	
	int get(int key) {
		if (!m.count(key))
			return -1;
		cache.splice(cache.begin(), cache, m[key]);
		return cache.front().val;
	}
	
	void put(int key, int value) {
		Node node(key, value);
		if (m.count(key))
			cache.erase(m[key]);

		cache.push_front(node);
		m[key] = cache.begin();
		
		if (m.size() > capacity) {
			m.erase(cache.back().key);
			cache.pop_back();
		}
	}
};
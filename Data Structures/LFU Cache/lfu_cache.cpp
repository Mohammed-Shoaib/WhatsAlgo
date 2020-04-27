/*
Data Structure: Least Frequently Used Cache
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
    int key, val, freq;
    Node(int key, int val) : key(key), val(val), freq(0) {}
};

class LFUCache {
private:
    int min_freq, capacity;
    std::list<Node> cache;
    std::unordered_map<int, std::list<Node>> freq;
    std::unordered_map<int, std::list<Node>::iterator> m;

public:
    LFUCache(int capacity) : min_freq(0), capacity(capacity) {}
    
    int get(int key) {
        if (!m.count(key))
            return -1;
        Node node = *m[key];
        freq[node.freq].erase(m[key]);
        if (node.freq == min_freq && freq[node.freq].size() == 0)
            min_freq++;
        freq[++node.freq].push_front(node);
        m[key] = freq[node.freq].begin();
        return node.val;
    }
    
    void put(int key, int value) {
        if (capacity == 0)
            return;
        else if (m.count(key)) {
            m[key]->val = value;
            get(key);
            return;
        }
        
        Node node(key, value);
        freq[node.freq].push_front(node);
        m[key] = freq[node.freq].begin();
        
        if (m.size() > capacity) {
            m.erase(freq[min_freq].back().key);
            freq[min_freq].pop_back();
        }
        
        min_freq = node.freq;
    }
};
/*
Data Structure: Running Median
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
Space Complexity: O(n)

| Operations  | Time	| Space |
|-------------|---------|-------|
| insert(num) | O(logn) | O(1)  |
| median()    | O(1)	| O(1)  |
*/

#include <queue>

class RunningMedian {
private:
	std::priority_queue<int> max_heap;
	std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
public:
	RunningMedian() {}
	
	void insert(int num) {
		if (max_heap.empty() || num < max_heap.top())
			max_heap.push(num);
		else
			min_heap.push(num);
		rebalance();
	}

	void rebalance() {
		if (max_heap.size() - min_heap.size() == 2) {
			min_heap.push(max_heap.top());
			max_heap.pop();
		} else if (min_heap.size() - max_heap.size() == 2) {
			max_heap.push(min_heap.top());
			min_heap.pop();
		}
	}
	
	double median() {
		if (max_heap.size() > min_heap.size())
			return max_heap.top();
		else if (min_heap.size() > max_heap.size())
			return min_heap.top();
		else
			return (max_heap.top() + min_heap.top()) / 2.0;
	}
};
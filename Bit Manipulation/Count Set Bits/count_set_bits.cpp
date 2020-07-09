/*
Algorithm: Count Set Bits
Time: O(1)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "count_set_bits.h"

unsigned int count_set_bits(unsigned int num) {
	// brian kernighan’s algorithm
	unsigned int cnt = 0;
	while (num) {
		num &= num - 1;
		cnt++;
	}
	return cnt;
}
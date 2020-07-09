/*
Algorithm: Highest Set Bit
Time: O(1)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "highest_set_bit.h"

unsigned int highest_set_bit(unsigned int num) {
	// num = 1XXXXXXX XXXXXXXX XXXXXXXX XXXXXXXX
	num |= (num >> 1);			// 11XXXXXX XXXXXXXX XXXXXXXX XXXXXXXX
	num |= (num >> 2);			// 1111XXXX XXXXXXXX XXXXXXXX XXXXXXXX
	num |= (num >> 4);			// 11111111 XXXXXXXX XXXXXXXX XXXXXXXX
	num |= (num >> 8);			// 11111111 11111111 XXXXXXXX XXXXXXXX
	num |= (num >> 16);			// 11111111 11111111 11111111 11111111
	return num - (num >> 1);	// 10000000 00000000 00000000 00000000
}
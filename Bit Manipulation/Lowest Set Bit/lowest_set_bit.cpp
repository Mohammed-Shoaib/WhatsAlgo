/*
Algorithm: Lowest Set Bit
Time: O(1)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "lowest_set_bit.h"

unsigned int lowest_set_bit(unsigned int num) {
	return num & -num;
}
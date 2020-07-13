/*
Algorithm: Reverse Bits
Time: O(1)
Space: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include "reverse_bits.h"

unsigned int reverse_bits(unsigned int num) {
	num = ((num & 0x0000ffff) << 16) | ((num & ~0x0000ffff) >> 16);
	num = ((num & 0x00ff00ff) <<  8) | ((num & ~0x00ff00ff) >>  8);
	num = ((num & 0x0f0f0f0f) <<  4) | ((num & ~0x0f0f0f0f) >>  4);
	num = ((num & 0x33333333) <<  2) | ((num & ~0x33333333) >>  2);
	num = ((num & 0x55555555) <<  1) | ((num & ~0x55555555) >>  1);
	return num;
}
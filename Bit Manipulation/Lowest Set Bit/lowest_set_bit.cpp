/*
Algorithm: Lowest Set Bit
Time Complexity: O(1)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

unsigned int lowest_set_bit(unsigned int num) {
	return num & -num;
}
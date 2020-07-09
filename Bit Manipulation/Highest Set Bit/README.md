# Highest Set Bit

Given an integer, get the highest set bit.

We can solve this using some clever bit trick.

Say we are given an integer num where the highest set bit occurs at the position of MSB.

num = 1XXXXXXX XXXXXXXX XXXXXXXX XXXXXXXX

We do the following,

*	num | (num >> 1)  = 11XXXXXX XXXXXXXX XXXXXXXX XXXXXXXX
*	num | (num >> 2)  = 1111XXXX XXXXXXXX XXXXXXXX XXXXXXXX
*	num | (num >> 4)  = 11111111 XXXXXXXX XXXXXXXX XXXXXXXX
*	num | (num >> 8)  = 11111111 11111111 XXXXXXXX XXXXXXXX
*	num | (num >> 16) = 11111111 11111111 11111111 11111111
*	num - (num >> 1)  = 10000000 00000000 00000000 00000000

and we get the highest set bit.

This approach works for any position if the integer is of size 32-bits. If we have a 64-bit integer, we need to add one more step, shifting it right by 32 bits before subtracting to get the highest set bit.


### Time Complexity

Best Case: Ω(1)

Average Case: θ(1)

Worst Case: O(1)


### Space Complexity

Worst Case: O(1)


### Function Description

The function `highest_set_bit` has the following parameter:

* `num`: an unsigned integer

**Return value:** an unsigned integer with a 1 at the highest bit position, rest all bits set to 0.


### Input Format

A single line containing an unsigned integer `num`.


### Output Format

An unsigned integer with a single 1 at the highest set bit position in `num`.


### Sample Input 0

```
3
```


### Sample Output 0

```
2
```


### Explanation 0

The number 3 in binary is 0011, the highest set bit is at position 1 counting from right with zero-based indexing giving us 0010 which is 2 in binary.


### Sample Input 1

```
5
```


### Sample Output 1

```
4
```


### Explanation 1

The number 5 in binary is 0101, the highest set bit is at position 2 counting from right with zero-based indexing giving us 0100 which is 4 in binary.


### Sample Input 2

```
15
```


### Sample Output 2

```
8
```


### Explanation 2

The number 15 in binary is 1111, the highest set bit is at position 3 counting from right with zero-based indexing giving us 1000 which is 8 in binary.


### Sample Input 3

```
0
```


### Sample Output 3

```
0
```


### Explanation 3

The number 0 in binary is 0000 due to which there is no set bit. Hence, we return 0000 which is 0 or the same number in binary.
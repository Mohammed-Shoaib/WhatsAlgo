# Lowest Set Bit

Given an integer, get the lowest set bit.

We can solve this using some clever bit trick.

The 1's complement of a number complements every bit of it

*	0101 → 1010
*	1010 → 0101
*	1000 → 0111
*	0000 → 0000

Notice how there is a stream of 1's where originally there was a stream of 0's in the right side.

The 2's complement adds a 1 to the 1's complement

*	1010 + 1 → 1011
*	0101 + 1 → 0110
*	0111 + 1 → 1000
*	0000 + 1 → 0001

Now the stream of 1's all get flipped until we encounter the first 0. This 0 that we encounter is actually the lowest set bit! All the bits to the left of it are now the complement of the original number. We can now get the lowest set bit by using the `&` (and) operation with the 2's complement of a number.

But what is the 2's complement of a number? It is the negative number!

*	5  = 0101 → -5  = 1011
*	10 = 1010 → -10 = 0110
*	8  = 1000 → -8  = 1000
*	0  = 0000 → -0  = 0000

We can now define our function

```
def LSB(num):
	return num & -num
```


### Time Complexity

Best Case: Ω(1)

Average Case: θ(1)

Worst Case: O(1)


### Space Complexity

Worst Case: O(1)


### Function Description

The function `lowest_set_bit` has the following parameter:

* `num`: an unsigned integer

**Return value:** an unsigned integer with a 1 at the lowest bit position, rest all bits set to 0.


### Input Format

A single line containing an unsigned integer `num`.


### Output Format

An unsigned integer with a single 1 at the lowest set bit position in `num`.


### Sample Input 0

```
5
```


### Sample Output 0

```
1
```


### Explanation 0

The number 5 in binary is 0101, the lowest set bit is at position 0 counting from right with zero-based indexing giving us 0001 which is 1 in binary.


### Sample Input 1

```
10
```


### Sample Output 1

```
2
```


### Explanation 1

The number 10 in binary is 1010, the lowest set bit is at position 1 counting from right with zero-based indexing giving us 0010 which is 2 in binary.


### Sample Input 2

```
8
```


### Sample Output 2

```
8
```


### Explanation 2

The number 8 in binary is 1000, the lowest set bit is at position 3 counting from right with zero-based indexing giving us 1000 which is 8 in binary.


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
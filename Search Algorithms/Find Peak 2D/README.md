# Peak Finding 2D

Given a 2D array of numbers, find _a_ peak element. A peak element is one which is not smaller than its neighbours.


### Time Complexity

Best Case: Ω(1)

Average Case: θ(m + n)

Worst Case: O(m + n)

where m represents the number of columns and n represents the number of rows in the 2D array.


### Space Complexity

Worst Case: O(1)


### Function Description

Finds _a_ peak element in the matrix. The function `find_peak_2d` has the following parameter(s):

* `a`: a 2D vector of integers

**Return value:** an integer representing the zero-based indexing position of _a_ peak element given by (row, column).


### Input Format

The first line contains two integers `n` and `m`, the number of rows and the number of columns respectively.

The next `n` lines contains `m` space-separated integers `a[i]` where 0 ≤ `i` < `m`.


### Output Format

Two space separated integers specifying the zero-based indexing position of _a_ peak element given by (row, column).


### Sample Input 0

```
3 4
0 1 2 3
4 5 6 7
8 9 10 11
```


### Sample Output 0

```
2 3
```


### Explanation 0

Possible peak: 11

Respective position: (2, 3)

Since the 2D array is sorted, 11 is the only peak possible.


### Sample Input 1

```
3 4
1 5 9 3
0 4 3 2
8 7 4 6
```


### Sample Output 1

```
0 2
```


### Explanation 1

Possible peaks: 9, 8, 6

Respective positions: (0, 2), (2, 0), (2, 3)

Any of the above outputs are valid.
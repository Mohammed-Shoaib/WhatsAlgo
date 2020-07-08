# Find Peak 1D

Given an array of numbers, find _a_ peak element. A peak element is one which is not smaller than its neighbours.


### Time Complexity

Best Case: Ω(1)

Average Case: θ(log n)

Worst Case: O(log n)

where n represents the size of the array.


### Space Complexity

Worst Case: O(1)


### Function Description

Finds _a_ peak element in the array. The function `find_peak` has the following parameter(s):

* `a`: a vector of integers

**Return value:** an integer representing the zero-based indexing position of _a_ peak element.


### Input Format

The first line contains an integer `n`, the size of array.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

An integer representing the zero-based indexing position of _a_ peak element.


### Sample Input 0

```
5
0 1 2 3 4
```


### Sample Output 0

```
4
```


### Explanation 0

Possible peak: 4

Respective position: 4

Since the array is sorted, 4 is the only peak possible.


### Sample Input 1

```
5
3 1 2 5 4
```


### Sample Output 1

```
3
```


### Explanation 1

Possible peaks: 3, 5

Respective positions: 0, 3

Any of the above outputs are valid.

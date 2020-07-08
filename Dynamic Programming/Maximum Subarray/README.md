# Maximum Subarray

Given an array, kadane's algorithm finds a contiguous subarray with the largest sum.

Kadane's algorithm uses dynamic programming. However, implementing maximum subarray using divide & conquer is more subtle. We can split the array by half at each step and compute the following subproblem falling into 3 cases:

1. The maximum subarray falls into the left half of the array
2. The maximum subarray falls into the right half of the array
3. The maximum subarray goes through the middle of the array being the sum of the left half and the right half


### Time Complexity

Best Case: Ω(n)

Average Case: θ(n)

Worst Case: O(n)

where n represents the size of the array.


### Space Complexity

Worst Case: O(1)


### Function Description

The function `maximum_subarray` has the following parameter(s):

* `a`: a vector of integers

**Return value:** The maximum subarray sum.


### Input Format

The first line contains an integer `n`, the size of array.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

An integer representing the maximum subarray sum.


### Sample Input 0

```
5
5 1 3 4 2
```


### Sample Output 0

```
15
```


### Explanation 0

Since all numbers in the array are positive, the maximum subarray is the sum of all elements.

which is 5 + 1 + 3 + 4 + 2 = 15.


### Sample Input 1

```
5
-2 4 -3 5 -1
```


### Sample Output 1

```
6
```


### Explanation 1

The maximum subarray can be formed as follows:

4 + (-3) + 5 = 6, which is the largest possible.


### Sample Input 2

```
5
-4 -3 -1 -2 -5
```


### Sample Output 2

```
0
```


### Explanation 2

Since all numbers in the array are negative, the maximum subarray is 0 by not including any elements or the empty subarray.

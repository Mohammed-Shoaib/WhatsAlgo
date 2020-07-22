# Longest Increasing Subsequence

Given an array, find the longest subsequence such that the elements of the subsequence are sorted in increasing order.


### Time Complexity

Best Case: Ω(n)

Average Case: θ(n • log k)

Worst Case: O(n • log n)

where n represents the size of the array and k represents the length of the longest increasing subsequence.


### Space Complexity

Worst Case: O(n)

where n represents the size of the array.


### Function Description

The function `lis` has the following parameter(s):

* `a`: a vector of integers

**Return value:** The length of the longest increasing subsequence.


### Input Format

The first line contains an integer `n`, the size of array.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

An integer representing the length of the longest increasing subsequence.


### Sample Input

```
6
1 10 5 12 20 6
```


### Sample Output

```
4
```


### Explanation

The possible longest increasing subsequences are:

* 1 5 12 20
* 1 10 12 20

which is the maximum possible of length 4.

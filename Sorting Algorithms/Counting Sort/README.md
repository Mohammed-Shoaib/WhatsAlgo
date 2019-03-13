# Counting Sort

A sorting algorithms that counts the number of elements for each distinct key value. It then uses the counts to find the position of each key value in the sorted array.


### Time Complexity

Best Case: Ω(n + k)

Average Case: θ(n + k)

Worst Case: O(n + k)

where n represents the size of the array and k is the range of values.


### Space Complexity

Worst Case: O(k)


### Function Description

The function `counting_sort` has the following parameter(s):

* `a`: the vector of integers to be sorted

**Return value:** None.

It sorts the vector in ascending order. The original vector gets modified as it is passed by _reference_.


### Input Format

The first line contains an integer `n`, the size of array.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

The array `a` in sorted order.


### Sample Input

```
5
5 3 1 2 4
```


### Sample Output

```
1 2 3 4 5
```

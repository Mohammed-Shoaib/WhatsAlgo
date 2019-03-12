# Bubble Sort

A sorting algorithm that repeatedly compares adjacent pairs and swaps them if they are in the wrong order. It is named for the way smaller or larger elements _bubble_ to the top.


### Time Complexity

Best Case: Ω(n)

Average Case: θ(n²)

Worst Case: O(n²)

where n represents the size of the array.


### Space Complexity

Worst Case: O(1)


### Function Description

The function `bubble_sort` has the following parameter(s):

* `a`: the vector of integers to be sorted

**Return value:** None.

It sorts the vector _inplace_ in ascending order. The original vector gets modified as it is passed by _reference_. 


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
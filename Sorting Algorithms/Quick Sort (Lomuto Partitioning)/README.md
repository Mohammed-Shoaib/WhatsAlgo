# Quick Sort (Lomuto Partitioning)

A sorting algorithm that uses divide and conquer. It recursively partitions the array by picking a pivot, the elements to the left of pivot are smaller and the elements to the right of pivot are larger when compared to the pivot.


### Time Complexity

Best Case: Ω(n log(n))

Average Case: θ(n log(n))

Worst Case: O(n²)

where n represents the size of the array.


### Space Complexity

Worst Case: O(log(n))

where n represents the size of the array.


### Function Description

Given a range [low, high], it sorts the array _inplace_ in that range using lomuto partitioning. The function `quick_sort` has the following parameter(s):

* `low`: an integer specifying the starting position of range
* `high`: an integer specifying the ending position of range
* `a`: the vector of integers to be sorted

where 0 ≤ low ≤ high < n, n represents the size of array.

**Return value:** None.

It sorts the vector _inplace_ in ascending order. The original vector gets modified as it is passed by _reference_. 

To sort the whole array, call `quick_sort(0, n - 1, array)`.


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
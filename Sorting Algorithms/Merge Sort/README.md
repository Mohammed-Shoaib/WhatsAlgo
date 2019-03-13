# Merge Sort

An efficient sorting algorithm that uses divide and conquer. It recursively divides the array into halves, sorts the halves and merges them.


### Time Complexity

Best Case: Ω(n log(n))

Average Case: θ(n log(n))

Worst Case: O(n log(n))

where n represents the size of the array.


### Space Complexity

Worst Case: O(n)

where n represents the size of the array.


### Function Description

Given a range [left, right], it sorts the array in that range. The function `merge_sort` has the following parameter(s):

* `left`: an integer specifying the starting position of range
* `right`: an integer specifying the ending position of range
* `a`: the vector of integers to be sorted

where 0 ≤ left ≤ right < n, n represents the size of array.

**Return value:** None.

It sorts the vector in ascending order. The original vector gets modified as it is passed by _reference_. 

To sort the whole array, call `merge_sort(0, n - 1, array)`.


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
# Binary Search

Searches for an element in a sorted array by repeatedly dividing the search interval in half.


### Time Complexity

Best Case: Ω(1)

Average Case: θ(log n)

Worst Case: O(log n)

where n represents the size of the array.


### Space Complexity

Worst Case: O(1)


### Function Description

Given a key, it checks if the key is present in the array. The function `binary_search` has the following parameter(s):

* `key`: the integer to search
* `a`: a sorted vector of integers

**Return value:** an integer representing the position of the key in the array if found, else -1.

The vector must be sorted for binary search to work.


### Input Format

The first line contains two integers `n` and `key`, where `n` is the size of array and `key` is the value to search.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

An integer representing the position of the key in the array if found, else -1.


### Sample Input 0

```
5 4
1 2 3 4 5
```


### Sample Output 0

```
3
```


### Sample Input 1

```
5 7
1 2 3 4 5
```


### Sample Output 1

```
-1
```
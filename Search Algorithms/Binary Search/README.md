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

Given a range [low, high] and a key, it checks if the key is present in that range of the array. The function `binary_search` has the following parameter(s):

* `low`: an integer specifying the starting position of range
* `high`: an integer specifying the ending position of range
* `key`: the integer to search
* `a`: a sorted vector of integers

where 0 ≤ low ≤ high < n, n represents the size of array.

**Return value:** true if the element was found, else false.

The vector must be sorted for binary search to work. To search a key in the whole array, call `binary_search(0, n - 1, key, a)`.


### Input Format

The first line contains two integers `n` and `key`, where `n` is the size of array and `key` is the value to search.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

`1` or true if the element was found else `0` or false.


### Sample Input 0

```
5 4
1 2 3 4 5
```


### Sample Output 0

```
1
```


### Sample Input 1

```
5 7
1 2 3 4 5
```


### Sample Output 1

```
0
```
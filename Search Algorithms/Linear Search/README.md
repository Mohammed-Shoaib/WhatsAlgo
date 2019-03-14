# Linear Search

Searches for an element in an array sequentially until a match if found or the whole array has been searched.


### Time Complexity

Best Case: Ω(1)

Average Case: θ(n)

Worst Case: O(n)

where n represents the size of the array.


### Space Complexity

Worst Case: O(1)


### Function Description

Given a key, it checks if the key is present in the array. The function `linear_search` has the following parameter(s):

* `key`: the integer to search
* `a`: a vector of integers

**Return value:** true if the element was found, else false.


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
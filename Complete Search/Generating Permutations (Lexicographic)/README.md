# Generating Permutations (Lexicographic)

Given an array of elements, find all its permutations.


### Time Complexity

Best Case: Ω(nn!)

Average Case: θ(nn!)

Worst Case: O(nn!)

where n represents the size of the array.


### Space Complexity

Worst Case: O(1)


### Function Description

The function `generate_permutations` has the following parameter(s):

* `a`: a vector of integers

**Return value:** None.

The function prints each permutation on the standard output sorted in lexicographical order.


### Input Format

The first line contains an integer `n`, the size of array.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

n! lines denoting all possible permutations sorted in lexicographical order.


### Sample Input

```
3
2 1 3
```


### Sample Output

```
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1 
```
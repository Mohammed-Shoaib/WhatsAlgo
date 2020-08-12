# Generating Subsets

Given a set of elements, find all its subsets.


### Time Complexity

Best Case: Ω(n • 2ⁿ)

Average Case: θ(n • 2ⁿ)

Worst Case: O(n • 2ⁿ)

where n represents the size of the set.


### Space Complexity

Worst Case: O(n • 2ⁿ)


### Function Description

The function `generate_subsets` has the following parameter(s):

* `a`: a vector of integers

**Return value:** a vector of vector of integers representing all the subsets.


### Input Format

The first line contains an integer `n`, the size of array.

The next line contains `n` space-separated integers `a[i]` where 0 ≤ `i` < `n`.


### Output Format

2ⁿ lines denoting all possible subsets.


### Sample Input 0

```
1
2
```


### Sample Output 0

```

2
```


### Explanation 0

All possible subsets of {2}:

* {}
* {2}


### Sample Input 1

```
2
11 13
```


### Sample Output 1

```

11
13
11 13
```


### Explanation 1

All possible subsets of {11, 13}:

* {}
* {11}
* {13}
* {11, 13}

### Sample Input 2

```
3
1 2 3
```


### Sample Output 2

```

1
2
3
1 2
1 3
2 3
1 2 3
```


### Explanation 2

All possible subsets of {1, 2, 3}:

* {}
* {1}
* {2}
* {3}
* {1, 2}
* {1, 3}
* {2, 3}
* {1, 2, 3}
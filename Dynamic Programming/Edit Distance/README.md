# Edit Distance

Given two strings and 3 operations:

1. Insert a character
2. Delete a character
3. Substitute a character

Edit distance returns the minimum number of required operations to convert one string to another.


### Time Complexity

Best Case: Ω(m • n)

Average Case: θ(m • n)

Worst Case: O(m • n)

where m and n represent the size of each string.


### Space Complexity

Worst Case: O(m • n)

where m and n represent the size of each string.


### Function Description

The function `edit_distance` has the following parameter(s):

* `s1`: a string type representing the first string
* `s2`: a string type representing the second string

**Return value:** The minimum number of operations needed to convert one string to another.


### Input Format

The first line contains the first string `s1`.

The second line contains the second string `s2`.


### Output Format

An integer representing the minimum number of operations needed to convert `s1` to `s2`.


### Sample Input 0

```
saturday
sunday
```


### Sample Output 0

```
3
```


### Explanation 0

The string _saturday_ can be converted to _sunday_ as follows:

* Delete a: sturday
* Delete t: surday
* Substitute r: sunday

for a minimum of 3 operations.


### Sample Input 1

```
intention
execution
```


### Sample Output 1

```
5
```


### Explanation 1

The string _intention_ can be converted to _execution_ as follows:

* Substitute i: entention
* Substitute n: extention
* Delete t: exention
* Substitute n: exection
* Insert u: execution

for a minimum of 5 operations.

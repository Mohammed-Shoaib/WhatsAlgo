# Longest Common Subsequence

Given two strings, find their longest common subsequence (LCS). The LCS is the longest string that is a subsequence in both the strings.


### Time Complexity

Best Case: Ω(m • n)

Average Case: θ(m • n)

Worst Case: O(m • n)

where m represents the length of the first string and n represents the length of the second string.


### Space Complexity

Worst Case: O(m • n)

where m represents the length of the first string and n represents the length of the second string.


### Function Description

The function `lcs` has the following parameters:

* `s1`: a string representing the first string
* `s2`: a string representing the second string

**Return value:** an integer representing the length of the longest common subsequence.


### Input Format

The first line contains the first string `s1`.

The second line contains the second string `s2`.


### Output Format

An integer representing the length of the longest common subsequence.


### Sample Input 0

```
acbdea
abcda
```


### Sample Output 0

```
4
```


### Explanation 0

The longest common subsequence is "acda" with length 4.


### Sample Input 1

```
abcdgh
aedfhr
```


### Sample Output 1

```
3
```


### Explanation 1

The longest common subsequence is "adh" with length 3.


### Sample Input 2

```
abcd
acbd
```


### Sample Output 2

```
3
```


### Explanation 2

The possible longest common subsequences are:

* "abd"
* "acd"

which is the maximum possible of length 3.
# Extended Euclidean Algorithm

Given two integers a & b, find two other integers s & t, such that the following equation satisfies:

*	s × a + t × b = gcd(a, b)

The extended euclidean algorithm can calculate the greatest common divisor of a & b and at the same time also calculate the values of s & t. The extended euclidean keeps track of 6 additional variables s1, s2, s, t1, t2, and t. It starts by initializing s1 = 1, s2 = 0, t1 = 0, and t2 = 1. At each step of the euclidean algorithm, it performs the following step:

```
s = s1 - q * s2
t = t1 - q * t2
```

Just like the r1 & r2 in the euclidean algorithm, we perform the following step for s1, s2, t1, t2:

```
s1 = s2
s2 = s
t1 = t2
t2 = t
```

When the greatest common divisor has been computed, s1 holds the value of s and t1 holds the value of t.

The extended euclidean algorithm can also be implemented recursively. The recursive calls switch from `(s1, s2, t1, t2)` to `(s2, s, t2, t)`.

### Time Complexity

Best Case: Ω(1)

Average Case: θ(log (a + b))

Worst Case: O(log (a + b))

where a & b are the two integers.


### Space Complexity

Worst Case: O(1)


### Function Description

Computes the values of s & t such that the above equation satisfies. The function `extended_euclidean` has the following parameters:

* `a`: an integer
* `b`: an integer

**Return value:** a pair of integers representing the values of s & t.


### Input Format

A single line containing two space-separated integers `a` & `b`.


### Output Format

A single line containing two space-separated integers `s` & `t`.


### Sample Input 0

```
161 28
```

### Sample Output 0

```
-1 6
```


### Sample Input 1

```
17 0
```

### Sample Output 1

```
1 0
```


### Sample Input 2

```
0 45
```

### Sample Output 2

```
0 1
```
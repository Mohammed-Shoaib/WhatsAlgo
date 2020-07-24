# Modular Multiplicative Inverse

Compute the modular multiplicate inverse of a in modulo m. The modular multiplicative inverse of a is a positive integer x such that the following is true:

*	a • x ≡ 1 (mod m)

For this condition to be true, it is necessary that the following must also be true:

*	gcd(a, m) = 1

We can use the extended euclidean algorithm to compute the multiplicative inverse of a modulo m. Instead of keeping track of 6 additional variables, we will need to keep track of 3 additional variables t1, t2, and t. The remaining steps are identical to the extended euclidean algorithm.

When the greatest common divisor has been computed, we can easily check if it equal to 1. If it is, t1 holds the multiplicative inverse of a. However, this value may be less than 0. By adding m, we will get the multiplicative inverse of a in modulo m.

### Time Complexity

Best Case: Ω(1)

Average Case: θ(log(m))

Worst Case: O(log(m))

where m is an integer representing the modulo.


### Space Complexity

Worst Case: O(1)


### Function Description

Computes the modular multiplicative inverse of a in modulo m. The function `modular_inverse` has the following parameters:

* `a`: an integer
* `m`: an integer representing the modulo

**Return value:** a positive integer representing the modular multiplicative inverse of a in modulo m if it exists, else -1.


### Input Format

A single line containing two space-separated integers `a` and `m`.


### Output Format

A single integer which is the multiplicative inverse of a in modulo m.


### Sample Input 0

```
11 26
```

### Sample Output 0

```
19
```


### Sample Input 1

```
23 100
```

### Sample Output 1

```
87
```


### Sample Input 2

```
12 26
```

### Sample Output 2

```
-1
```
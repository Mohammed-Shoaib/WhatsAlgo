# Least Common Multiple

Compute the least common multiple of two numbers. The least common multiple is the smallest positive integer that is divisible by the two numbers.

The LCM can be computed by using the GCD of the two numbers by the below formula:

```
lcm(a, b):
	return (a * b) / gcd(a, b)
```

### Time Complexity

Best Case: Ω(1)

Average Case: θ(log (a + b))

Worst Case: O(log (a + b))

where a & b are the two integers.


### Space Complexity

Worst Case: O(log (a + b))


### Function Description

Computes the least common multiple of a & b. The function `lcm` has the following parameters:

* `a`: an integer
* `b`: an integer

**Return value:** an integer representing the least common multiple of a & b.


### Input Format

A single line containing two space-separated integers `a` and `b`.


### Output Format

A single integer which is the lcm of a & b.


### Sample Input 0

```
10 15
```

### Sample Output 0

```
30
```


### Sample Input 1

```
11 17
```

### Sample Output 1

```
187
```


### Sample Input 2

```
25 100
```

### Sample Output 2

```
100
```
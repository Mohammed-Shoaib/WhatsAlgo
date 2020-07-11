# Greatest Common Divisor

Compute the greatest common divisor of two numbers. The greatest common divisor is the largest integer which divides the two numbers.

The GCD can be computed by using an efficient and fast method known as the Euclidean algorithm. It is named after the greek mathematician Euclid. The Euclidean algorithm keeps track of 4 variables, r1, r2, r, and q. The iterative implementation is given below:

```
r1 = a
r2 = b
while (r2 != 0):
	q = r1 / r2
	r = r1 % r2
	r1 = r2
	r2 = r
```

In the end, the r1 holds the gcd of a & b.

The gcd can also be computed recursively:

```
gcd(a, 0) = a				# base case
gcd(a, b) = gcd(b, a % b) 	# recursive formula
```

### Time Complexity

Best Case: Ω(1)

Average Case: θ(log (a + b))

Worst Case: O(log (a + b))

where a & b are the two integers.


### Space Complexity

Worst Case: O(1)


### Function Description

Computes the GCD of a & b. The function `gcd` has the following parameters:

* `a`: an integer
* `b`: an integer

**Return value:** an integer representing the greatest common divisor of a & b.


### Input Format

A single line containing two space-separated integers `a` and `b`.


### Output Format

A single integer which is the gcd of a & b.


### Sample Input 0

```
10 15
```

### Sample Output 0

```
5
```


### Sample Input 1

```
11 17
```

### Sample Output 1

```
1
```


### Sample Input 2

```
25 100
```

### Sample Output 2

```
25
```
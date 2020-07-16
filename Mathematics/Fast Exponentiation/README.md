# Fast Exponentiation

Fast exponentiation is used for computing x<sup>n</sup> or x to the power n. 

A naive approach would compute the following:

x<sup>n</sup> = (x • x • ... • x) n times

The overall time complexity is O(n).

We will use the method of **exponentiation by squaring** for fast computation. It is derived by observing the following to compute x<sup>n</sup>:

* (x<sup>n/2</sup>)<sup>2</sup> if n is even
* x • (x<sup>n/2</sup>)<sup>2</sup> if n is odd

where n/2 is the floor division.

In essence, we have reduced our problem size by _half_ from size n to size n/2. Using this approach, we will have at most _log n_ steps.


### Time Complexity

Best Case: Ω(log n)

Average Case: θ(log n)

Worst Case: O(log n)

where n represents the power to be computed.


### Space Complexity

Worst Case: O(1)


### Function Description

Computes x<sup>n</sup>. The function `power` has the following parameters:

* `x`: a double
* `n`: an integer representing the power to be computed

**Return value:** a double which is the result of x<sup>n</sup>.


### Input Format

A single line containing two space-separated values, the first being a double value representing `x` and the second being an integer value representing `n`.


### Output Format

A single double value with 6 degrees of precision which is the result of x<sup>n</sup>.


### Sample Input 0

```
10 0
```

### Sample Output 0

```
1.000000
```


### Sample Input 1

```
2 3
```

### Sample Output 1

```
8.000000
```


### Sample Input 2

```
2 -3
```

### Sample Output 2

```
0.125000
```
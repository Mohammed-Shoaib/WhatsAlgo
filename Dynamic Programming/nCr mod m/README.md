# nCr mod m

Calculate the value of n choose r modulo m or nCr % m. We know the formula for nCr can be computed as follows:

```
nCr(n, r):
    return n! / (r! • (n - r)!)
```

However, as n gets large, n! gets massive. Below is a table representing the growth of n! compared to n:

| n 	| n! 	                    |
|:-----:|---------------------------|
| 2     | 2                         |
| 5     | 120                       |
| 10    | 3,628,800                 |
| 20    | 2,432,902,008,176,640,000 |
| 50    | 3.04140932 E+64           |
| 100   | 9.332621544 E+157         |

Clearly, for even very small values of n, n! is extremely large. Such large numbers cannot be stored as many programming languages have a limit on the number of bits that can be stored for an integer. Below is a table representing the max value of n that can be stored on machines with different bit sizes:

| bits  | limit                         | max n |
|:-----:|-------------------------------|:-----:|
| 8     | 255                           | 5     |
| 16    | 65,535                        | 8     |
| 32    | 4,294,967,295                 | 12    |
| 64    | 18,446,744,073,709,551,615    | 20    |

As you can see, 20! is the largest value that we can store on a 64-bit machine. Due to this, we generally want to compute nCr mod m. This allows us to compute nCr for large values of n as we will always store it with modulo m avoiding overflow.

We will calculate nCr mod m using dynamic programming by using the following formula:

```
C(n, 0) = C(n, n) = 1					# base cases
C(n, r) = C(n - 1, r - 1) + C(n - 1, r)	# recursive formula
```

There is no constraint on m but there is a constraint on n. n cannot be too large and there are two reasons:

*	The dynamic programming approach requires two loops, one for n and the other for r. Hence, the time complexity is given by O(n • r). If n = 100,001 and r = 100,000 then the complexity is O(n • r) = O(10<sup>10</sup>) causing our program to be slow.
*	The subproblems need to be stored in memory. We can be space-efficient and use a 1D array instead of a 2D array as a problem of size n only depends on the subproblem of size n - 1. If we compute the results in order from 1, 2, ... , n, we can use a 1D array. Using this optimization, our program can store the results for n ≤ 100,000.


### Time Complexity

Best Case: Ω(1)

Average Case: θ(n • r)

Worst Case: O(n • r)

where n is the number of elements we have and r is the number of elements we must choose.


### Space Complexity

Worst Case: O(r)

where r is the number of elements we must choose.


### Function Description

Computes nCr mod m. The function `nCr_mod_m` has the following parameters:

* `n`: an integer representing the number of elements we have
* `r`: an integer representing the number of elements we must choose
* `m`: an integer representing the modulo

**Return value:** an integer representing the value of nCr mod m.


### Input Format

A single line containing three space-separated integers `n`, `r`, and `m`.


### Output Format

A single integer which is the value of nCr mod m.


### Sample Input 0

```
10 2 13
```

### Sample Output 0

```
6
```


### Sample Input 1

```
10 10 13
```

### Sample Output 1

```
1
```


### Sample Input 2

```
100001 1000 10007
```

### Sample Output 2

```
9628
```
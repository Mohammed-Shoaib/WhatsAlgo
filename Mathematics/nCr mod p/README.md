# nCr mod p

Calculate the value of n choose r modulo p or nCr % p, where p is a prime number. We know the formula for nCr can be computed as follows:

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

| Bits  | Limit                         | Max n |
|:-----:|-------------------------------|:-----:|
| 8     | 255                           | 5     |
| 16    | 65,535                        | 8     |
| 32    | 4,294,967,295                 | 12    |
| 64    | 18,446,744,073,709,551,615    | 20    |

As you can see, 20! is the largest value that we can store on a 64-bit machine. Due to this, we generally want to compute nCr mod m. This allows us to compute nCr for large values of n as we will always store it with modulo m avoiding overflow.

We will calculate nCr mod m using modular inverses by using the following formula:

<pre>
nCr (mod m) = n! • r!<sup>-1</sup> • (n - r)!<sup>-1</sup> (mod m)
</pre>

This requires us to compute modular inverses. For this, the following condition needs to be satisfied:

```
∀x ∈ [1, n], gcd(x, m) = 1
```

As long as this condition is met, we can use the concept of modular inverses to compute nCr mod m. The modular inverse of a in modulo m can be computed using the extended euclidean algorithm.

When the modulo is prime, we can use fermat's little theorem:

<pre>
a<sup>p - 1</sup> = a (mod p)
a • a<sup>p - 2</sup> = 1 (mod p)
</pre>

To compute the modular inverse, we need to compute a<sup>p - 2</sup> (mod p) which can be computed using [Fast Modular Exponentiation](../Fast%20Modular%20Exponentiation).


### Time Complexity

Best Case: Ω(n)

Average Case: θ(n)

Worst Case: O(n)

where n is the number of elements we must choose from.


### Space Complexity

Worst Case: O(1)


### Function Description

Computes nCr mod p. The function `nCr_mod_p` has the following parameters:

* `n`: an integer representing the number of elements we have
* `r`: an integer representing the number of elements we must choose
* `p`: an integer representing the prime modulo

**Return value:** an integer representing the value of nCr mod p.


### Input Format

A single line containing three space-separated integers `n`, `r`, and `p`.


### Output Format

A single integer which is the value of nCr mod p.


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
100000000 1000000 1000000007
```

### Sample Output 2

```
472616960
```
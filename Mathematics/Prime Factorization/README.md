# Prime Factorization

Given a positive integer, find it's prime factorization. A number can have at most _log n_ prime factors. However, we still must go through √n divisors.

We loop through all numbers x from [2, √n] and check if x divides n. If it does, we run a while loop to compute the factorization of n with x. The while loop will make sure we get the **prime** factorization.

### Time Complexity

Best Case: Ω(1)

Average Case: θ(√n)

Worst Case: O(√n)

where n is the integer we want to check.


### Space Complexity

Worst Case: O(log n)


### Function Description

Computes the prime factorization of a given integer. The function `prime_factorization` has the following parameter:

* `n`: an integer of which we want to get the prime factorization

**Return value:** a vector where each element has two integers {prime, exponent} representing the prime factorization in sorted order.


### Input Format

A single integer `n`.


### Output Format

The first line contains an integer `m` representing the number of prime factors.
`m` lines follow each consist of two space-separated integers where the first integer is the prime factor and the second integer is the exponent of the prime factor in the sorted order of the prime factorization of `n`.


### Sample Input 0

```
6
```

### Sample Output 1

```
2
2 1
3 1
```


### Sample Input 1

```
60
```

### Sample Output 1

```
3
2 2
3 1
5 1
```


### Sample Input 2

```
11
```

### Sample Output 2

```
1
11 1
```

# Primality Test

Check if a number is prime. A number can have at most √n divisors. A small optimization can be made by observing all primes are of the form 6k ± 1. We can express any integer using the form 6k + i for i = -1, 0, 1, 2, 3, and 4. 

We know the following is true:

*	6k + 0 is divisible by 2 or 3 since either of them divides 6 and 0.
*	6k + 2 is divisible by 2 since 2 divides 6 and 2 divides 2.
*	6k + 3 is divisible by 3 since 3 divides 6 and 3 divides 3.
*	6k + 4 is divisible by 2 since 2 divides 6 and 2 divides 4.

This leaves us with two integers which we need to check, 6k - 1 and 6k + 1 or 6k ± 1.

### Time Complexity

Best Case: Ω(1)

Average Case: θ(√n)

Worst Case: O(√n)

where n is the integer we want to check.


### Space Complexity

Worst Case: O(1)


### Function Description

Checks if an integer is prime. The function `is_prime` has the following parameter:

* `n`: an integer which we want to check if it's prime or not

**Return value:** true if the number is prime, else false.


### Input Format

A single integer `n`.


### Output Format

`1` or true if `n` is prime, else `0` or false.


### Sample Input 0

```
11
```

### Sample Output 0

```
1
```


### Sample Input 1

```
15
```

### Sample Output 1

```
0
```


### Sample Input 2

```
1
```

### Sample Output 2

```
0
```
# Coin Change

Given a set of denominations or coins and a change, what is the minimum number of coins needed to make the change?


### Time Complexity

Best Case: Ω(n • c)

Average Case: θ(n • c)

Worst Case: O(n • c)

where n represents the required change and c represents the number of coins.


### Space Complexity

Worst Case: O(n)


### Function Description

The function `coin_change` has the following parameter(s):

* `target`: an integer specifying the required change
* `coins`: a vector of integers specifying the set of coins

**Return value:** The minimum number of coins needed to make the change if it is possible, else -1.


### Input Format

The first line contains two integers `n` and `target`, where `n` is the number of coins and `target` is the required change.

The next line contains `n` space-separated integers `coins[i]` where 0 ≤ `i` < `n`.


### Output Format

An integer representing the minimum number of coins needed to make the change if it is possible, else -1.


### Sample Input 0

```
7 109
98 5 11 100 10 1 50
```


### Sample Output 0

```
2
```


### Explanation 0

The change 109 can be formed as follows:

109 = 98 + 11

for a minimum of 2 coins.


### Sample Input 1

```
4 109
100 50 10 5
```


### Sample Output 1

```
-1
```


### Explanation 1

The change 109 cannot be formed using the given set of coins.

# Coin Change

Given a set of denominations or coins and a change, what is the minimum number of coins needed to make the change?


### Time Complexity

Best Case: Ω(1)

Average Case: θ(c)

Worst Case: O(c)

where c represents the number of coins.


### Space Complexity

Worst Case: O(1)


### Function Description

The function `coin_change_greedy` has the following parameter(s):

* `target`: an integer specifying the required change
* `coins`: a sorted vector of integers specifying the set of coins

**Return value:** The minimum number of coins needed to make the change if it is possible, else -1.

The vector must be sorted for `coin_change_greedy` to work.

**Note:** Since the solution uses greedy approach, it does _not_ work for all sets of coins. It works for a canonical coin system, such as the one used in US, India and many other countries.


### Input Format

The first line contains two integers `n` and `target`, where `n` is the number of coins and `target` is the required change.

The next line contains `n` space-separated integers `coins[i]` where 0 ≤ `i` < `n`.


### Output Format

An integer representing the minimum number of coins needed to make the change if it is possible, else -1.


### Sample Input 0

```
5 109
1 5 10 50 100
```


### Sample Output 0

```
6
```


### Explanation 0

The change 109 can be formed as follows:

109 = 100 + 5 + 1 + 1 + 1 + 1

for a minimum of 6 coins.


### Sample Input 1

```
4 109
5 10 50 100
```


### Sample Output 1

```
-1
```


### Explanation 1

The change 109 cannot be formed using the given set of coins.

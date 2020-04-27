# LFU Cache

Implement a Least Frequently Used (LFU) cache with the following operations efficiently:

*	void put(int key, int value): set or insert the key with value into the cache. If the cache is full, delete the least frequently used item from the cache. In case there is a tie (i.e., two or more keys have the same frequency), it should delete the least recently used item from the cache.
*	int get(key): return the value (will always be positive) of the key if it exists in the cache, else -1.

Assume you have P operations for `put` and Q operations for `get` and the maximum capacity is of size N.

We can implement both operations in constant time by combining two data structures. Namely, the linked list and the hashmap. We will use the linked list for fast insertion and deletion i.e., constant time since we only need to modify the pointers. However, searching for an element to delete when the capacity is full takes linear time in a linked list. For this, we will use a hashmap to have a reference to the node in the linked list with the given key that takes _constant_ time.

Now the question is how do we efficiently retrieve the least frequently used item? We can do this by maintaining the minimum frequency in a variable. We store each frequency in a linked list of its own, essentially having a 2D linked list. Each linked list uses the least recently used (LRU) cache. This way, when we must delete the least frequently used item, we can use our minimum frequency variable to retrieve the linked list and then evict an element using the LRU cache. Since we only evict if the capacity is full when we use the `put` operation, the new element will have the minimum frequency and we don't need to find the next minimum frequency.


### Time Complexity

Best Case: Ω(P + Q)

Average Case: θ(P + Q)

Worst Case: O(P + Q)

where P is the number of calls to `put` and Q is the number of calls to `get`.


### Space Complexity

Worst Case: O(N)

where N is the maximum capacity of the cache.


### Class Description

#### `put`:

The function `put` has the following parameters:

* `key`: an integer
* `value`: an integer which will always be positive

**Return value:** None.

#### `get`:

The function `get` has the following parameter:

* `key`: an integer

**Return value:** an integer representing the value of the key if it exists in the cache, else -1.


### Input Format

The first line contains two space-separated integers `N` and `P` + `Q` i.e., the maximum capacity of the cache and the number of operations respectively.

`P` + `Q` lines follow each from one of the below cases:
*	`1 key value`: a call to `put(key, value)`.
*	`2 key`: a call to `get(key)`, requires printing the value if it exists in the cache, else -1.


### Output Format

`Q` lines each containing a single integer value which is the result of `get(key)`.


### Sample Input

```
2 14
1 1 11
1 2 12
2 1
2 1
2 2
1 3 13
2 1
2 2
2 3
1 3 14
2 1
2 3
1 4 14
2 3
```

### Sample Output

```
11
11
12
11
-1
13
11
14
-1
```
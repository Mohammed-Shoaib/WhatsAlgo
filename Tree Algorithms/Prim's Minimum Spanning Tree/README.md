# Prim's Algorithm

Given a graph, find the **cost** of the minimum spanning tree.

Prim's algorithm starts by choosing an arbitrary vertex s. It then processes vertex s and adds all the edges connected to s in a **min-heap** sorted by {edge weight, vertex}. Many programming languages have the data structure of a priority queue for either a min/max heap. Then, we go through all edges in the priority queue. We process vertex u if it hasn't been processed yet. We need to keep track of processed vertices as there might be stale edges or edges that were initially the minimum but now aren't anymore. When we process a vertex, we add the edge to the minimum spanning tree, in this case, we add the edge weight to the cost of the minimum spanning tree.


### Time Complexity

Best Case: Ω(E • log E)

Average Case: θ(E • log E)

Worst Case: O(E • log E)

where E represents the number of edges in the graph.


### Space Complexity

Worst Case: O(V + E)

where V represents the number of vertices and E represents the number of edges in the graph.


### Function Description

Computes the cost of the minimum spanning tree. The function `mst_prim` has the following parameters:

* `adj`: a 2D vector of pairs {node, weight} representing the adjacency list

**Return value:** an integer representing the cost of the minimum spanning tree.


### Input Format

The first line contains two integers `V` and `E`, where `V` is the number of vertices and `E` is the number of edges in the graph.

The next `E` lines contain three space-separated integers `a`, `b`, and `w` where 0 ≤ `a`,`b` < `V` representing an undirected edge from vertex `a` to vertex `b` with weight `w`.


### Output Format

A single integer representing the cost of the minimum spanning tree.


### Sample Input 0

```
9 14
2 3 7
0 7 8
7 6 1
1 2 8
6 5 2
5 4 10
2 8 2
3 5 14
7 1 11
0 1 4
3 4 9
2 5 4
7 8 7
8 6 6
```

### Sample Output 0

```
37
```


### Sample Input 1

```
7 11
1 2 11
3 4 15
3 1 9
1 4 10
4 2 5
0 3 4
3 5 6
0 1 7
5 6 13
4 5 12
4 6 8
```

### Sample Output 1

```
40
```
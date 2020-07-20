# Kruskal's Algorithm

Given a graph, find the **cost** of the minimum spanning tree.

Kruskal's algorithm starts by sorting the edges of the graph by their weights in ascending order. It then loops through the edges and keeps adding them as long as adding the edge does not form a cycle in the graph as this would violate the directed acyclic graph (DAG) constraint. This can be done efficiently by using a Union-Find data structure. As we are sorting the edges in the graph, there is an upper bound in the time complexity of Kruskal's algorithm.


### Time Complexity

Best Case: Ω(E • log E)

Average Case: θ(E • log E)

Worst Case: O(E • log E)

where E represents the number of edges in the graph.


### Space Complexity

Worst Case: O(V + E)

where V represents the number of vertices and E represents the number of edges in the graph.


### Function Description

Computes the cost of the minimum spanning tree. The function `mst_kruskal` has the following parameter(s):

* `n`: an integer representing the number of vertices
* `edges`: a 2D vector representing the edge list where each element in the vector is of the form {node u, node v, weight w} which means the node u is connected to node v with an undirected edge of weight w.

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
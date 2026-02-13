7. Given a weighted graph, implement Dijkstra’s algorithm to find the shortest path from a source node to all other nodes.

(a) Data Structure

1.Graph (Adjacency Matrix):
The graph is stored using an adjacency matrix.
graph[i][j] represents the weight of the edge from vertex i to vertex j.
If graph[i][j] = 0, it means there is no direct edge.

2.Distance Array (dist[]):
It stores the shortest distance from the source to each vertex.
Initially all values are set to infinity (INT_MAX), except the source which is set to 0.

3.Processed Set Array (sptSet[]):
Tracks whether a vertex is processed or not.
0 means not processed, 1 means processed.

4.Parent Array (parent[]):
It stores the predecessor of each vertex in the shortest path.
Used to print the actual shortest path.
Initialized to -1 meaning no parent.

(b) Function implementation

1.minDistance():

i.It finds the vertex with the smallest distance value from dist[].
ii.Only considers vertices that are not processed.
iii.Returns the index of the minimum-distance vertex.

2.printPath():

i.It prints the shortest path from the source to a destination vertex.
ii.Uses the parent[] array to trace the path.
iii.Prints the path in correct order using recursion.

3.dijkstra():

i.Implements Dijkstra’s algorithm.<br>
ii.Initializes dist[], sptSet[], and parent[].
iii.Repeatedly selects the nearest unprocessed vertex.
iv.Updates (relaxes) the distances of neighboring vertices.
v.Finally prints the shortest distance and path from source to all nodes.

(c) main() function

The main() method defines the weighted graph using an adjacency matrix and selects a source vertex as the starting node. It then calls the dijkstra() function to compute the shortest distances and shortest paths from the source to all other vertices. After that, the program prints the results and finally terminates successfully using the return statement.

(d) Output

![output2](https://github.com/shresthaukti/dsa_assignment/blob/76c8bf2bb6cbe42df69bb4fff5700e06a52ec47b/output/output_7.png)

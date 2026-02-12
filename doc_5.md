5. How can we implement the undirected graph using the adjacency matrix? Write a function that implements the BFS and DFS technique to traverse through the graph. Demonstrate the use of your program with an example graph.

(a) Data structure
The program uses a 2D array adj[MAX][MAX] to represent the adjacency matrix of an undirected graph. The array vis[MAX] keeps track of visited vertices during BFS and DFS. A queue is implemented using the array queue[MAX] with front f and rear r pointers for BFS traversal. The variable V stores the number of vertices in the graph.

(b) Description of the functions implemented
1.isEmpty() – It checks if the queue is empty by comparing f with -1. Returns 1 if empty, 0 otherwise.
2.isFull() – It checks if the queue is full by comparing r with MAX-1. Returns 1 if full, 0 otherwise.
3.enqueue(int x) – It adds a vertex x to the queue if it is not full and updates the front and rear pointers.
4.dequeue() – It removes and returns the front element from the queue. Resets the queue if it becomes empty.
5.BFS(int start) – It performs BFS starting from the start vertex using the queue. It visits all connected vertices level by level.
6.DFS_use(int n) –It is a helper function for DFS that recursively visits all connected vertices from n.
7.DFS(int start) – It performs DFS starting from the start vertex by calling DFS_use.
8.printAdjMatrix() – Displays the adjacency matrix of the graph in a readable format.

(c) Overview of how the main() method is organized
The main() function first sets V = 3 and initializes the adjacency matrix to zero. It adds edges to form an undirected graph by updating adj[i][j] for connected vertices. The program first calls printAdjMatrix() to display the matrix. Then it performs BFS starting from vertex 0 using the BFS() function and prints the traversal. At last it performs DFS starting from vertex 0 using the DFS() function and prints the traversal.

(d) Output
![output2](https://github.com/shresthaukti/dsa_assignment/blob/d8992d2aab38078c2dc4806a2dcaf983b32cf7fc/output/output_5.png)

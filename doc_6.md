6. Given the array of the data (unsorted), Write a program to build the min and max heap.
(a) Data structure
The program uses an array arr[MAX] to store the unsorted  elements. Two additional arrays, maxHeap[MAX] and minHeap[MAX] are used to store the elements after building the max-heap and min-heap, respectively. The array represents the heap as a complete binary tree, where for any index i, the left child is at 2*i + 1 and the right child at 2*i + 2.

(b) Description of the functions

1.swap(int *a,int *b) – It swaps the values of two integers. It is used in heap operations.

2.maxHeap(int arr[], int n, int i) – It ensures the subtree rooted at index i satisfies the max-heap property (parent ≥ children). Recursively adjusts elements if necessary.

3.minHeap(int arr[], int n, int i) – It ensures the subtree rooted at index i satisfies the min-heap property (parent ≤ children). Recursively adjusts elements if necessary.

4.buildMaxHeap(int arr[], int n) – It converts the array into a max-heap by calling maxHeap() from the last non-leaf node up to the root.

5.buildMinHeap(int arr[], int n) – It converts the array into a min-heap by calling minHeap() from the last non-leaf node up to the root.

6.printHeap(int arr[], int n) – It prints all elements of the heap array in a single line.

(c) main() function

The main() function first reads the number of elements and the unsorted array from the user. It then copies the array into maxHeap[], builds the max-heap using buildMaxHeap(), and prints it. Similarly, it copies the array into minHeap[], builds the min-heap using buildMinHeap(), and prints it. The program ends after displaying both heaps.

(d) Output
![output6](link)
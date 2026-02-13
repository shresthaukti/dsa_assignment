8. Write a program that generates a list of N random integers in the range [1, 1000], where N
is provided by the user at run time. Then, perform the following tasks:
(a) Ask the user to choose a sorting algorithm from the following:
• Bubble Sort
• Selection Sort
• Insertion Sort
• Merge Sort
(b) Sort the randomly generated numbers using the chosen algorithm.
(c) Print the numbers before and after sorting.
(d) Display the total number of comparisons and swaps (if applicable) performed by the
chosen algorithm.

(a) Data Structure

The program uses arrays to manage the data. The array arr[] stores the randomly generated integers, while original[] keeps a copy of the unsorted array. Two variables comparisons and swaps of type long long are used to count the total number of comparisons and swaps performed during sorting. Temporary arrays are also used in merge sort to hold the divided portions of the array while merging.

(b) Function Implementation

1. bubbleSort()
 It compares adjacent elements and swaps them if needed, gradually moving the largest elements to the end while counting comparisons and swaps.

2. selectionSort()
It finds the minimum in the unsorted portion and swaps it with the first unsorted element, counting comparisons and swaps.

3. insertionSort()
It inserts each element into its correct position in the sorted portion, counting comparisons and moves as swaps.

4. mergeSort() and merge()
It recursively divides the array and merges sorted halves, counting comparisons but not swaps.

5. printArray()
It displays all elements of the array in order.

(c) main() function

The main() function asks the user for the number of elements and creates an array of random numbers. It shows the unsorted array and lets the user pick a sorting algorithm. Then it calls the chosen function, counts comparisons and swaps, and finally prints the sorted array with the totals.

(d)Output

![output2](link)
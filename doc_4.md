4. How can we implement the doubly linked list using structure? Write a method to insert(after given node) and delete the node in a doubly linked list. Write main() to demonstrate the use of the functions.

(a)Data Structure

In this program, a doubly linked list is implemented using a struct Node. Each node contains three members: an integer data to store the value, a pointer next to point to the next node, and a pointer prev to point to the previous node. A global pointer head is declared and initialized to NULL, which represents the starting node of the list.

(b) Function implementation
1.createNode(int x)
This function creates a new node dynamically using malloc(), assigns the given value x to the node’s data, and sets both next and prev pointers to NULL. It returns the newly created node.

2.insertAfter(struct Node* givenNode, int x)
This function inserts a new node with value x after the specified node (givenNode). It adjusts the next and prev pointers so that the new node is properly linked between givenNode and the next node.

3.deleteNode(struct Node** head, int key)
This function deletes the node containing the value key from the doubly linked list. It searches for the node, updates the links of the previous and next nodes, and frees the memory of the deleted node. If the node is not found, it prints an error message. Here it uses pass by reference function to operate.

4.display(struct Node* head)
This function traverses the list starting from the head node and prints each node’s data value until it reaches the end (NULL).

(c) main() program
The main() function creates three nodes (10, 20, 30) and links them to form a doubly linked list. It displays the original list, inserts 25 after 20, shows the updated list, then deletes 30 and displays the final list.

(d) Output

![output2](https://github.com/shresthaukti/dsa_assignment/blob/0d25d62af8c8460bb081d2a59ce0d0ab09574d40/output/output_4.png)

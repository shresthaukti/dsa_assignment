Q3. Write and Implement the reverse traversal algorithm in the linked list. Write main() to demonstrate the use of the function.

(a) Data Structures
The program uses a doubly linked list, where each node contains an integer data, a pointer next to the next node, and a pointer prev to the previous node. The head of the list is maintained using a pointer head. This structure allows traversal in both forward and backward directions.

(b) Functions
createNode(int data):It  creates a new node with the given value.

insertEnd(struct Node* head,int data): It adds a new node at the end of the list and returns the updated head.

printList(struct Node* head): It prints the elements of the list in forward order.

reverseTraversal(struct Node* head): It prints the elements of the list in reverse order by following the prev pointers from the last node.

(c) Main Function

The main() function initializes the list with head=NULL, inserts four nodes using insertEnd(), prints the list in normal order using printList()and then prints it in reverse order  using reverseTraversal(). 

(d)Output

![output3](https://github.com/shresthaukti/dsa_assignment/blob/545dc086194a90d7587a3fb7a36d444e0fb30284/output/output_3.png)]

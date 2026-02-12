(a) Data Structure
Stack as a datastructure is used in this program with implementation of array and top as a variable that operates the stack.

(b)Description of the functions implemented

1. isempty()
This function checks whether the stack is empty or not. If top == -1, it returns 1 (empty), otherwise it returns 0.
2. isfull()
This function checks whether the stack is full. If top == MAX-1, it returns 1 (full), otherwise it returns 0.
3. push(char ch)
This function inserts an opening bracket into the stack. It first checks stack overflow using isfull(), then increments top and stores the character in op[top].
4. pop()
This function removes the top element from the stack. It first checks stack underflow using isempty(), then returns the top element after decrementing top.
5. compare(char open, char close)
This function checks whether an opening bracket matches its corresponding closing bracket. It returns 1 for correct pairs like (), [], {}, otherwise returns 0.
6. check(char exp[])
This function checks whether the given expression is balanced. It pushes opening brackets and pops when closing brackets appear. If mismatch occurs, it returns 0, otherwise returns 1 if balanced.

(c) Overview of main() Method
The main() function takes the input expression from the user and calls the check() function to test balance. If the expression is balanced, it prints "Expression is balanced", otherwise it prints "Expression is not balanced".

(d) A sample output of a complete run of the program.
![text](link)

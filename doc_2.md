2. Write a program to convert an infix mathematical expression to postfix and evaluate it.

(a) Data Structures
this program uses two stacks implemented as arrays. op[MAX] with top stores operators and parentheses for infix-to-postfix conversion, while an integer stack stack[MAX] with topEval stores operands and intermediate results for postfix evaluation.

(b) Functions

isempty() / isfull() – To check if the stack is empty or full respectively.

push(ch) / pop() / peek() – It adds, removes, or views the top element of the character stack.

precedence(ch) – Returns the precedence of an operator (^, *, /, +, -).

infixToPostfix() – Converts infix expressions to postfix using the stack, placing operands directly in the postfix string and operators according to precedence rules.

evaluatePostfix() – Evaluates the postfix expression by pushing operands onto a stack and applying operators to the top two elements, returning the final result.

(c) Main Function

The main() function takes an infix expression from the user, converts it to postfix using infixToPostfix(), prints the postfix form, then evaluates it using evaluatePostfix() and displays the result. It coordinates the stack operations and arithmetic logic using the functions defined above.

(d)Output
![output2](link)
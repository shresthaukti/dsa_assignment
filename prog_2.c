#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAX 100

char op[MAX];
int top = -1;
int isempty() {
    return top == -1;
}

int isfull() {
    return top == MAX - 1;
}

void push(char ch) {
    if (isfull()) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    op[top] = ch;
}

char pop() {
    if (isempty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    char x = op[top];
    top--;
    return x;
}

char peek() {
    if (isempty()) return -1;
    return op[top];
}

int precedence(char ch) {
    if(ch == '^') return 3;
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return 0;
}
void infixToPostfix(char* infix, char* postfix) {
    int i = 0, k = 0;
    char ch;

    while((ch = infix[i++]) != '\0') {
        if(isdigit(ch)) {
            postfix[k++] = ch; 
        }
        else if(ch == '(') {
            push(ch);
        }
        else if(ch == ')') {
            while(!isempty() && peek()!= '(')
                postfix[k++] = pop();
            pop(); 
        }
        else { 
            while(!isempty() && precedence(peek())>= precedence(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }
    while(!isempty()) {
        postfix[k++] = pop();
    }
    postfix[k] = '\0';
}
int evaluatePostfix(char* postfix) {
    int stack[MAX];
    int topEval = -1;
    for(int i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];
        if(isdigit(ch)) {
            stack[++topEval] = ch - '0';
        } else {
            int b = stack[topEval];
             topEval--;
            int a = stack[topEval];
            topEval--;
            switch(ch) {
                case '+': stack[++topEval] = a + b; break;
                case '-': stack[++topEval] = a - b; break;
                case '*': stack[++topEval] = a * b; break;
                case '/': stack[++topEval] = a / b; break;
                case '^': stack[++topEval] = (int)pow(a, b); break;
            }
        }
    }
    return stack[topEval];
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression (single-digit operands only): ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Evaluation Result: %d\n", result);

    return 0;
}

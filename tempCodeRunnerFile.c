#include <stdio.h>
#include <string.h>
#define MAX 75
char op[MAX];
int top = -1;
void isempty(char op){ //checking if stack is empty or not
    if(top==-1)
    return 1;
}
void isfull(char op){ //checking if stack is full or not
    if(top==MAX-1)
    return 1;
}
void push(char ch) {  //pushing expression one by one
     if(isfull(op)){
        printf("Stack Overflow")
    }
    top++;
    stack[top] = ch;
}

char pop() {      //pop one by one
    if(isempty(op)){
        printf("Stack Underflow")
    }
    return op[top];
    top--;
}
int compare(char open, char close) {   //comparing parenthesis
    if (open == '(' && close == ')') return 1;
    if (open == '[' && close == ']') return 1;
    if (open == '{' && close == '}') return 1;
    return 0;
}
int check(char exp[]) {  // checking balance of paranthesis
    for (int i = 0; i < strlen(exp); i++) {
        char ch = exp[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (top == -1)  

            char open = pop();

            if (!compare(open, ch))
                return 0;
        }
    }
    if (top == -1)
        return 1;
    else
        return 0;
}
int main() {
    char exp[MAX];
    printf("Enter expression: ");
    gets(exp);
    if (check(exp))
        printf("Expression is balanced\n");
    else
        printf("Expression is not balanced\n");

    return 0;
}

#include <stdio.h>
#include <string.h>
#define MAX 75
char op[MAX];
int top=-1;
int isempty(){ //checking if stack is empty or not
    if(top==-1)
    return 1;
    else return 0;
}
int isfull(){ //checking if stack is full or not
    if(top==MAX-1)
    return 1;
    else return 0;
}
void push(char ch) {  //pushing expression one by one
     if(isfull()){
        printf("Stack Overflow\n");
    }
    top++;
    op[top]=ch;
}

char pop() {      //pop one by one
    if(isempty()){
        printf("Stack Underflow\n");
    }
    char x=op[top];
    top--;
    return x;
}
int compare(char open, char close) {   //comparing parenthesis
    if (open=='(' && close==')') return 1;
    if (open=='[' && close==']') return 1;
    if (open=='{' && close=='}') return 1;
    return 0;
}
int check(char exp[]) {  // checking balance of paranthesis
    for (int i=0; i<strlen(exp); i++) {
        char ch= exp[i];
        if (ch == '(' || ch=='[' || ch=='{') {
            push(ch);
        }
        else if (ch==')' || ch==']' || ch=='}') {
            if (isempty()) 
            {return 0;
            } 
            char open=pop();
    
            if (!compare(open, ch))
                return 0;
        }
    }
    if (isempty())
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

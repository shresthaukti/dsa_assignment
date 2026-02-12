#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
struct Node* insertEnd(struct Node* head,int data){
    struct Node* newNode=createNode(data);
    if(head==NULL) return newNode;
    struct Node* temp=head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}
void reverseTraversal(struct Node* head){
    if(head==NULL) return;
    struct Node* temp=head;
    while(temp->next!=NULL) temp=temp->next;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
void printList(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    struct Node* head=NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertEnd(head,30);
    head=insertEnd(head,40);
    printf("Original List: ");
    printList(head);
    printf("Reverse Traversal: ");
    reverseTraversal(head);
    return 0;
}

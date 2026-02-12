#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head=NULL;

struct Node* createNode(int x){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void insertAfter(struct Node* givenNode,int x){
    if(givenNode==NULL){
        printf("Given node cannot be NULL\n");
        return;
    }

    struct Node* newNode=createNode(x);

    newNode->next=givenNode->next;
    newNode->prev=givenNode;

    if(givenNode->next!=NULL)
        givenNode->next->prev=newNode;

    givenNode->next=newNode;
}

void deleteNode(struct Node** head,int key){
    struct Node* temp=*head;

    while(temp!=NULL && temp->data!=key){
        temp=temp->next;
    }

    if(temp==NULL){
        printf("Node not found\n");
        return;
    }

    if(temp->prev!=NULL)
        temp->prev->next=temp->next;
    else
        *head=temp->next;

    if(temp->next!=NULL)
        temp->next->prev=temp->prev;

    free(temp);
}

void display(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head=createNode(10);
    struct Node* second=createNode(20);
    struct Node* third=createNode(30);

    head->next=second;
    second->prev=head;

    second->next=third;
    third->prev=second;

    printf("Original List: ");
    display(head);

    insertAfter(second,25);
    printf("After Inserting 25 after 20: ");
    display(head);

    deleteNode(&head,30);
    printf("After Deleting 30: ");
    display(head);

    return 0;
}

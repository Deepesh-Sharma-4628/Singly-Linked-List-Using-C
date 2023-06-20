#include<stdio.h>
#include<stdlib.h>
//node structure
struct node{
    int data;
    struct node* next;
};

//display linked list   Time Complexity:-O(n)  Space Complexity:-O(1)
void display(struct node* head){
    struct node *temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

//create linked list  Time Complexity:- O(n)

void create(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* last=head;
    int x;
    scanf("%d",&x);
    last->data=x;
    last->next=NULL;
    scanf("%d",&x);
    while(x!=-1){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next=NULL;
        scanf("%d",&x);
    }
    display(head);
}
void main(){
create();
}
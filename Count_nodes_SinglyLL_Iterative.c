#include<stdio.h>
#include<stdlib.h>
//node structure
struct node{
    int data;
    struct node* next;
};

//display linked list   Time Complexity:-O(n)  Space Complexity:-O(1)
void count(struct node* temp){
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    printf("%d",count);
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
    count(head);
}
void main(){
create();
}
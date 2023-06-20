#include<stdio.h>
#include<stdlib.h>
//node structure
struct node{
    int data;
    struct node* next;
};

//display linked list   Time Complexity:-O(n)  Space Complexity:-O(1)
void sum(struct node* temp){
    int sum=0;
    while(temp){
        sum+=temp->data;
        temp=temp->next;
    }
    printf("%d",sum);
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
    sum(head);
}
void main(){
create();
}
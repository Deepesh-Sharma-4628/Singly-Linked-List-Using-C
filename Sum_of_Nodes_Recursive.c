#include<stdio.h>
#include<stdlib.h>
//node structure
struct node{
    int data;
    struct node* next;
};

//sum linked list Recursive Relation:-T(n)=T(n-1)+1   time complexity:-O(n)   Space Complexity:-O(n)
int sum(struct node* head){
    if(head==NULL){
       return 0;
    }
    else return head->data+sum(head->next);
    
}

//create linked list

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
    printf("%d",sum(head));
}
void main(){
create();
}
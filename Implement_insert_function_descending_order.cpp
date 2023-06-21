#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
      int data;
        struct node *next;
        };
        typedef struct node node;
  node* create(){
  node* head;
int n,d;
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>d;
 node* nn=(node*)malloc(sizeof(node));
  nn->data=d;\n    if(i==0){
     head=nn;
nn->next=NULL;
 }
else{
   node *p=head,*q=NULL;
  while(p!=NULL && p->data>d){
 q=p;
 p=p->next;}
 if(q==NULL){
   head=nn;
  nn->next=p;}
   else{
    nn->next=q->next;
            q->next=nn;}
      }
  }
  return head;
  }
  int main(){
   node *head=create();
 while(head){
   cout<<head->data<<" ";
    head=head->next;
  }
 }
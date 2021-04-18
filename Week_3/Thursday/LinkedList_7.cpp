// XOR LL

#include <stdio.h> 
#include <stdlib.h> 
#include <inttypes.h>
struct node{
    int d;
    int ptr;
};
struct node* list;
struct node* XOR(struct node* a , struct node* b){
    return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}
void addbeg(struct node** list,int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
    temp->d=data;
    
    temp->ptr=*list;
    
    if(*list!=NULL){
        (*list)->ptr=XOR((struct node*)(*list)->ptr,temp);
    }
    *list=temp;
}
void addend(struct node** list,int data){
     struct node* temp=(struct node*)malloc(sizeof(struct node*));
    temp->d=data;
    struct node* curr=*list,*prev=NULL,*next=list;
    
     if((*list)==NULL){
         temp->ptr=NULL;
         *list=temp;
     }else{
     while(next!=NULL){
        next=XOR((struct node*)curr->ptr,prev);
        prev=curr;
        curr=next;
        if(next!=NULL){
        next=XOR((struct node*)curr->ptr,prev);}
        }
        curr->ptr=XOR(curr->ptr,temp);
        temp->ptr=curr;
     }
}

void displaylist(struct node **list){
    struct node* curr=*list,*prev=NULL,*next;
    if(*list==NULL){
        printf("%d",-1);
    }else{
    while(curr!=NULL){
        printf("%d ",curr->d);
        next=XOR((struct node*)curr->ptr,prev);
        prev=curr;
        curr=next;
    }}
}
void deleteend(struct node **list){
     struct node* curr=*list,*prev=NULL,*next=list;
     if((*list)==NULL){
         printf("%d",-1);
     }else{
     while(next!=NULL){
        next=XOR((struct node*)curr->ptr,prev);
        prev=curr;
        curr=next;
        if(next!=NULL){
        next=XOR((struct node*)curr->ptr,prev);}
     }
     
     if((*list)->ptr==NULL){
         *list=NULL;
     }else{
     prev->ptr=XOR(prev->ptr,curr);}
     free(curr);
     }
}
int main(){
    list=NULL;
    addbeg(&list,5);addbeg(&list,4);addbeg(&list,3);
    // deleteend(&list);
    addend(&list,9);
    deleteend(&list);
    displaylist(&list);
}

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;


void display(struct node *p){
    while(p){
        printf("%d ",p->data);
        printf("%d\n",p->next);
        p=p->next;
    }
}
//this function is for just inserting one node at the end of linked list
void insertLast(int x){
    struct node *last,*t=new node;
    t->data=x;
    t->next=0;
    if(first==NULL){
        first=last=t;
    }else{
        last->next=t;
        last=t;
    }
}
void SortedInsert(node *p,int x){
    node *q, *t;
    t=new node;
    t->data=x;
    t->next=0;
    
    if(first==0){
        first=t;
    }
    else{
        while(p && p->data<x){
        q=p;
        p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}
int main(){
    int arr[]={2,10,4,9,7,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for (int i=0;i<n;i++){
    //     insertLast(arr[i]);
    // }
    for (int i=0;i<n;i++){
        SortedInsert(first,arr[i]);
    }
    
    display(first);
    return 0;
}

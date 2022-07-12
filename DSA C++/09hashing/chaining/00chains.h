#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*first;
void sortedInsert(node *p,int x){
    node *q=NULL,*t;
    t= new node;
    t->data=x;
    t->next=NULL;
    if(first ==0){
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
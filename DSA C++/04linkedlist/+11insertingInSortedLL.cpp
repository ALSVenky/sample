
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
void SortedInsert(node *p,int y){
    node *q;
    p=first;
    q=0;
    while(p && y<p->data){
        q=p;
        p=p->next;
    }
    node *t=new node;
    t->data=y;
    t->next=q->next;
    q->next=t;
}
int main(){
    int arr[]={2,4,5,7,8};
    int n=5,x;
    for (int i=0;i<n;i++){
        insertLast(arr[i]);
    }
    cin>>x;
    SortedInsert(first,x);
    display(first);
    return 0;
}

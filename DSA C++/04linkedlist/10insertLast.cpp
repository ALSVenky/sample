
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

int main(){
    int arr[]={2,4,5,7,8};
    int n=5;
    for (int i=0;i<n;i++){
        insertLast(arr[i]);
    }
    display(first);
    return 0;
}

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
}*top=NULL;
void push(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"stack over flow"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop(){
    int value=-1;
    if(top==NULL){
        cout<<"stack is empty!"<<endl;
    }
    else{
        node *p=top;
        top=top->next;
        value=p->data;
        free(p);
    }
    return value;
}
void display(){
    node *p;
    p=top;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int peek(int pos){
    node *p =top;
    for(int i=0;i<pos-1 &&p;i++){
        p=p->next;
    }
    if(p){
        return p->data;
    }
    return -1;
}
int stackTop(){
    int value=-1;
    if(top==NULL){
        cout<<"stack is empty!"<<endl;
    }
    else{
        value=top->data;
    }
    return value;
}
int isEmpty(){
    return (top==NULL)?0:1;// (return !top?0:1;)
}
int isFull(){
    node *t=new node;
    return (t==NULL)?1:0;
}
int main(){
    push(1);
    push(4);
    push(3);
    display();
    cout<<pop()<<endl;
    cout<<peek(2)<<endl;
    cout<<isEmpty();
    return 0;
}
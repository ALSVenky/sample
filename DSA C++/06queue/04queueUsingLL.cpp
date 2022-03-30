#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x){
    node *t=new node;
    if(t==NULL){
        printf("queue is full!");
    }else{
        t->data=x;
        t->next=NULL;
        if(front == NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
    
}
int dequeue(){
    int x=-1;
    node *t;
    if(front==0){
        printf("queue is empty!");
    }else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}
void display(){
    struct node *q=front;
    while(q){
        cout<<q->data<<" ";
        q=q->next;
    }
    cout<<endl;
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    cout<<dequeue()<<endl;
    display();
    return 0;
}
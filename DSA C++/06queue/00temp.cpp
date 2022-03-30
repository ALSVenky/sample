#include<iostream>
//#include <bits/stdc++.h>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->Q=new int(q->size);
}
void display(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<" ";
    }
    
    cout<<endl;
}
void enqueue(queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"queue is full ";
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int main(){
    struct queue q;
    int x;
    printf("enter size ");
    scanf("%d", &q.size);
    create(&q,q.size);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,6);
    display(q);
    return 0;
}
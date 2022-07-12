#include<iostream>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
}q;
void create(queue *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->Q=new int(q->size);
}
void display(queue q){
    int i;
    for(i=q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<" ";
    }
}
void enqueue(struct queue *q,int x){
    if(q->rear==q->size-1){
        printf("queue is full!");
    }else{
        q->rear++;
        q->Q[q->rear]=x;
    }
    
}
int dequeue(struct queue *q){
    int x=-1;
    if(q->front==q->rear){
        printf("queue is empty!");
        return x;
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void requiredQueue(int A[],int size){
    int i=0,j;
    if(size%2==0){j=size/2;}else{j=size/2+1;}
    // cout<<j;
    int x=j;
    while(i!=x ){
        enqueue(&q,A[i]);
        if(j<size)
        enqueue(&q,A[j]);
        i++;
        j++;
    }
}
int main(){
    int A[]={11, 12, 13, 14, 15, 16, 17, 18, 19,20};
    int size=sizeof(A)/sizeof(A[0]);
    create(&q,20);
    requiredQueue(A,size);
    display(q);
    return 0;
}
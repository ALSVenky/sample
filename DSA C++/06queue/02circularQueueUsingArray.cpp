#include<iostream>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(queue *q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=new int(q->size);
}
void display(queue q){
    int i=q.front+1;
    do{
        printf("%d",q.Q[i]);
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    printf("\n");
}
void enqueue(struct queue *q,int x){
    if((q->rear+1)%(q->size)==q->front){
        printf("queue is full!");
    }else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }

}
int dequeue(struct queue *q){
    int x=-1;
    if(q->front==q->rear){
        printf("queue is empty!");
        return x;
    }else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
int main(){
    struct queue q;
    create(&q,3);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(q);
    printf("\n");
    printf("%d\n",dequeue(&q));
    display(q);
    return 0;
}
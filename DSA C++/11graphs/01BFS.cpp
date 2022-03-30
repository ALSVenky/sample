#include <iostream>
// #include<queue>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
}q;
void createQueue(queue *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->Q=new int(q->size);
}
void enqueue(queue *q,int x){
    if(q->rear==q->size-1){
        printf("queue is full!");
    }else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(queue *q){
    if(q->rear!=q->front){
        q->front++;
        return (q->Q[q->front]);
    }else {
        return -1;
    }
}
int isEmpty(queue *q){
    if(q->front==q->rear){
        return 1;
    }
    return 0;
}
void BFS(int vtx,int A[][8],int n){
    int visited [8] {0};
    cout<<vtx<<" , ";
    visited[vtx]=1;
    enqueue(&q,vtx);

    while (!isEmpty(&q))
    {
        int u=dequeue(&q);
        for(int v=1;v<=n;v++){
            if(A[u][v]==1 && visited[v]==0){
                cout<<v<<", ";
                visited[v]=1;
                enqueue(&q,v);
                
            }
        }
    }
    cout<<endl;
}
int main(){
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

    cout << "Vertex: 4 -> ";
    createQueue(&q,100);
    BFS(4, A, 8);
    return 0;
}
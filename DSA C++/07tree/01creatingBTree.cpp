#include<iostream>
using namespace std;
struct node{
    int data;
    node *lchild,*rchild;
}*root=NULL;
struct stack {
    int size;
    int top;
    node **s;
};
void createstack(stack *st, int size)
{
    st->size=size;
    st->top = -1;
    st->s = (node **)malloc(st->size*sizeof (node *));
}
void push(stack *st, node * value){ 
    if (st->top == st->size - 1)
    {
        printf("stack over flow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = value;
    }
}
node * pop(stack *st)
{
    node *value=0;
    if (st->top == -1)
    {
        printf("stack under flow\n");
        return value;
    }
    else
    {
        value = st->s[st->top];
        st->top--;
    }

    return value;
}
int isEmptyStack(stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    return 0;
}




struct queue{
    int size;
    int front;
    int rear;
    node * *Q;
};
void createqueue(queue *q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=(node **)malloc(q->size*sizeof (node *));
}

void enqueue(struct queue *q,node * x){
    if((q->rear+1)%(q->size)==q->front){
        printf("queue is full!");
    }else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
node * dequeue(struct queue *q){
    node* x=NULL;
    if(q->front==q->rear){
        printf("queue is empty!");
        return x;
    }else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
int isEmpty(queue q){
    return q.front==q.rear;
}






void createTree(){
    node *p,*t;
    int x;
    struct queue q;
    createqueue(&q,100);
    cout<<"enter root value ";
    cin>>x;
    root= new node;
    root->lchild=root->rchild=0;
    root->data=x;
    enqueue(&q,root);
    while(!isEmpty(q)){
        p=dequeue(&q);
        cout<<"enter the lchild of "<<p->data;
        cin>>x;
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=t->rchild=0;
            p->lchild=t;
            enqueue(&q,t);
        }
        cout<<"enter the rchild of "<<p->data;
        cin>>x;
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=t->rchild=0;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}
void preorder(struct node *p){
    if(p){
        cout<<p->data;
        preorder(p->lchild);
        preorder(p->rchild);
    } 
}
void iterPreorder(node *t){
    struct stack stk;
    createstack(&stk,100);
    while(t!=NULL || !isEmptyStack(stk)){
        if(t!=NULL){
            cout << t->data;
            push(&stk,t);
            t=t->lchild;
        }else{
            t=pop(&stk);
            t=t->rchild;
        }
    }
}
void iterINorder(node *t){
    struct stack stk;
    createstack(&stk,100);
    while(t!=NULL || !isEmptyStack(stk)){
        if(t!=NULL){
            push(&stk,t);
            t=t->lchild;
        }else{
            t=pop(&stk);
            cout << t->data;
            t=t->rchild;
        }
    }
}
void levelOrder(node *t){
    struct queue q1;
    createqueue(&q1,10);
    cout<<t->data;
    enqueue(&q1,t);
    while(!isEmpty(q1)){
        t=dequeue(&q1);
        if(t->lchild){
            cout<<t->lchild->data;
            enqueue(&q1,t->lchild);
        }
        if(t->rchild){
            cout<<t->rchild->data;
            enqueue(&q1,t->rchild);
        }
    }
}
int nodeCount(node *p){  // its working is based on postorder.
    int x,y;
    if(p){
        x=nodeCount(p->lchild);
        y=nodeCount(p->rchild);
        return x+y+1;
    }
    return 0;
}
int deg2nodeCount(node *p){  // its working is based on postorder.
    int x,y;
    if(p){
        x=deg2nodeCount(p->lchild);
        y=deg2nodeCount(p->rchild);
        if(p->lchild && p->rchild){
            return x+y+1;
        }else{
            return x+y;
        }
    }
    return 0;
}
int sumOfNodes(node *p){  // its working is based on postorder.
    int x,y;
    if(p){
        x=sumOfNodes(p->lchild);
        y=sumOfNodes(p->rchild);
        return x+y+p->data;
    }
    return 0;
}
int treeHeight(node *p){
    int x,y;
    if(p){
        x=treeHeight(p->lchild);
        y=treeHeight(p->rchild);
        if(x>y){
            return x+1;
        }else{
            return y+1;
        }
    }
    return 0;
}

int main(){
    createTree();
    //levelOrder(root);
    cout<<"no.of nodes = "<<nodeCount(root)<<endl;
    cout<<"no.of nodes having degree 2 = "<<deg2nodeCount(root)<<endl;
    cout<<"sum of nodes = "<<sumOfNodes(root)<<endl;
    cout<<"height of tree = "<<treeHeight(root)<<endl;
    return 0;
}
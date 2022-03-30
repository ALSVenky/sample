#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
};
class stack{
    public:
        node *top;
    private:
        stack();
        ~stack();
        void push(int x);
        int pop();
        int peek(int index);
        int stackTop();
        int isEmpty();
        int isFull();
};
stack::stack(){
    top=0;
}
stack::~stack(){
    node *p=top;
    while(top){
        top=top->next;
        delete p;
        p=top;
    }
}
void stack::push(int x){
    node *t=new node;
    if(t==0){
        cout<< "stackOverFlow."<<endl;
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int stack::pop(){
    if(top=0){
        cout<<"stack is empty."<<endl;
        return -1;
    }else{
        node *p=top;
        int x=p->data;
        top=top->next;
        delete p;
    }
}
int stack::isEmpty(){
    return top?0:1;
}
int stack::isFull() {
    node* t = new node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}
int stack::stackTop() {
    if (top){
        return top->data;
    }
    return -1;
}
int main(){
    return 0;
}
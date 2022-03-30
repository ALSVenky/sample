#include<iostream>
#include<cstring>
using namespace std;
struct node{
    char data;
    struct node* next;
}*top=NULL;
void push(char x){
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
char pop(){
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
char peek(int pos){
    node *p =top;
    for(int i=0;i<pos-1 &&p;i++){
        p=p->next;
    }
    if(p){
        return p->data;
    }
    return -1;
}
char stackTop(){
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
    return (top)?0:1;
}
int isFull(){
    node *t=new node;
    return (t==NULL)?1:0;
}
int isBalanced(char *exp){
    for (int i=0; i<strlen(exp); i++){
        if(exp[i]=='('){
            push('(');
        }else if (exp[i]==')'){
            if(isEmpty()){
                return 0;
            }pop();
        }
    }
    if(isEmpty()){
        return 1;
    }
    return 0;
}
int main(){
    char exp[]="((a+b)*(c-d))";
    // push('a');
    // push('b');
    // push('c');
    // display();
    // cout<<pop()<<endl;
    // cout<<peek(2)<<endl;
    cout<<isBalanced(exp);

    return 0;
}
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void display(struct node *p){
    node *q=p;
    do{
        cout<<p->data;
        p=p->next;
    }while(p!=q);
}
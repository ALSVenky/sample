#include<iostream>
using namespace std;
class node{
    public:
        int data;
        class node *next;
    };
int main(){
    //creating and accessing a node
    struct node *p;
    p=new node;
    p->data=10;
    p->next=0;//p->next=NULL;
    return 0;
}
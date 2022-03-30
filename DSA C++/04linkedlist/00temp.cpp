#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void create(int arr[], int n){
    struct node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=0;
    last=first;
    for(int i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){
    while(p){
        cout<<p->data<<" ";
        cout<<p->next<<"\n";
        p=p->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    create(arr,n);
    display(first);
    return 0;
}

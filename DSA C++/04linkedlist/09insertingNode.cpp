
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;

void create(int arr[],int n){
    struct node *t,*last;
    first = new node;
    first->data=arr[0];
    first->next=0;
    last=first;
    for (int i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){
    while(p){
        printf("%d ",p->data);
        printf("%d\n",p->next);
        p=p->next;
    }
}
void insert(int pos,int x){
    struct node *t,*p;
    if(pos==0){
        t=new node;
        t->data=x;
        t->next=first;
        first=t;
    }else if(pos>0){
        p=first;
        for(int i=1;i<pos-1 && p;i++){  //here we have to check that the p is pointing to somewhere or not.else it would become runtime error
            p=p->next;
        }
        if(p){ //insert onlt if p points to some where
            t=new node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
        
    }
    
}

int main(){
    int arr[]={2,5,4,7,8,3};
    int n=6;
    create(arr,n);
    display(first);
    insert(2,9); //pos starts from 1 unlike array index if pos=0 then it is insserting before 1st node
    display(first);
    return 0;
}

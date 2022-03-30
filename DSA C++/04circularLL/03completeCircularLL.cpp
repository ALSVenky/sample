#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*head;
void create(int arr[],int n){
    node *t,*last;
    head=new node;
    head->data=arr[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=last->next;last->next=t;
        last=t;
    }
}
void display(struct node *p){
    do{
        cout<<p->data;
        p=p->next;
    }while(p!=head);
    cout<<endl;
}

int length(struct node *p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=head);
    return len;
}

void insert(struct node *p,int pos,int x){
    node *t;
    if (length(p)<pos || pos<0){
        return;
    }
    if(pos==0){
        t=new node;
        t->data=x;
        if(head==0){
            head=t;
            head->next=head;
        }
        else{
            p=head;
            while(p->next!=head){
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head =t;
        }
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t=new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }   
}
int Delete(struct node *p,int pos){
    int dataValue;
    node *q;
    if(pos<0 || length(p)<pos){
        return -1;
    }
    if(pos==1){
        while(p->next!=head){
            p=p->next;
        }
        dataValue=head->data;
        if(p==head){
            free(head);
            head=NULL;
        }
        else{
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else{
        for(int i=0;i<pos-2;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        dataValue=q->data;
        delete q;
    }
    return dataValue;
}

int main(){
    int arr[]={5,2,3,4,1,6};
    create(arr,6);
    int len=length(head);
    int pos=0,x=9;
    insert(head,pos,x);
    cout<<length(head)<<endl;
    display(head);
    Delete(head,3);
    display(head);
    return 0;
}
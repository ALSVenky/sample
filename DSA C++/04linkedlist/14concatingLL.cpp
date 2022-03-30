#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    class node *next;
}*first=0,*second=0,*third=0;
void create1(int arr[],int n){
    struct node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=0;//p->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}
void create2(int arr[],int n){
    struct node *t,*last;
    second=new node;
    second->data=arr[0];
    second->next=0;//p->next=NULL;
    last=second;
    for(int i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}

void concat(struct node *p,struct node *q){
    third=p;
    while(p->next){
        p=p->next;
    }
    p->next=q;
}
void display(struct node *temp){
    while(temp!=0){
        printf("%d ",temp->data);//cout<<temp->data<<" ";
        printf("%d\n",temp->next);//cout<<temp->next<<" ";
        temp=temp->next;
    }

}
int main(){
    int arr1[]={2,4,6,8};
    int arr2[]={1,3,5,7};
    create1(arr1,4);
    create2(arr2,4);
    concat(second,first);
    display(third);
    return 0;
}
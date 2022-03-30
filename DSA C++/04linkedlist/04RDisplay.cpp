#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    class node *next;
}*first;
void create(int arr[],int n){
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
void RDisplay(struct node *temp){
    if(temp){
        printf("%d ",temp->data);
        printf("%d\n",temp->next);
        RDisplay(temp->next);
    }
}
int main(){
    int arr[]={2,4,6,8};
    create(arr,4);
    RDisplay(first);
    return 0;
}
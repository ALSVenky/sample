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
//recursive function for counting
int Max(struct node *p){
    int max=INT32_MIN;
    while(p){
        if(max<p->data){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}
int main(){
    int arr[]={2,4,6,8,10};
    create(arr,5);
    cout<<Max(first);
    return 0;
}
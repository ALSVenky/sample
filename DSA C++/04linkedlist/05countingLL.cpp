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
int count(struct node *p){
    if(!p){    //!p implies p==NULL
        return 0;
    }else{
        return count(p->next)+1;
    }
}
int main(){
    int arr[]={2,4,6,8};
    create(arr,4);
    //struct node *t=first;
    //int count=0;
    // while(t!=0){
    //     count++;
    //     t=t->next;
    // }
    // cout<<count;
    cout<<count(first);
    return 0;
}
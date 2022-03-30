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

// node* search(struct node *p,int key){
//     while(p){
//         if(key==p->data){
//             return p;
//         }
//         p=p->next;
//     }
//     return NULL;
// }

//improved search function (bringing the searched key to first place)
void search(struct node *p,int key){
    node *q=NULL;
    while(p){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
    //return NULL;
}
void display(struct node *temp){
    while(temp!=0){
        printf("%d ",temp->data);//cout<<temp->data<<" ";
        printf("%d\n",temp->next);//cout<<temp->next<<" ";
        temp=temp->next;
    }
}
int main(){
    int key;
    cin>>key;
    int arr[]={2,4,6,8,10};
    create(arr,5);
    search(first,key);
    display(first);
    return 0;
}
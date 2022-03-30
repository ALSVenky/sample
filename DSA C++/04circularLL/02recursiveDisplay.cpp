#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head;
void rDisplay(struct node *head){
    node *p=head;
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        cout<<p->data;
        rDisplay(p->next);
    }
    flag=0;
}
int main(){
    rDisplay(head);
    return 0;
}
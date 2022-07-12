#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*head1=NULL,*head2=NULL;//initialising lista as empty

void splitLL(node *head,node **head1_ref,node **head2_ref){
    node *slow_ptr=head;
    node *fast_ptr=head;
    if(head==NULL){
        return ;
    }
    while(fast_ptr->next !=head && fast_ptr->next->next!=head){
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }
    if(fast_ptr->next->next == head) //if no.of elements is even
        fast_ptr = fast_ptr->next;
    // Setting the head pointer of first half LL
    *head1_ref = head;
    // Setting the head pointer of second half LL
    if(head->next != head)
        *head2_ref = slow_ptr->next;
    // Making second half circular 
    fast_ptr->next = slow_ptr->next;
    head2->prev=fast_ptr;
    //  Making first half circular 
    slow_ptr->next = head;
    head->prev=slow_ptr;
}

void createLL(int *A, int n) {
    head = new node;
    head->prev = nullptr;
    head->data = A[0];
    head->next = head;
    node* tail = head;

    for (int i=1; i<n; i++){
        node* t = new node;
        t->prev = tail;
        t->data = A[i];
        t->next = tail->next;
        tail->next = t;
        tail = t;
    }
}

void printLL(node *head){
    node *temp = head;
    if(head != NULL)
    {
        cout << endl;
        do {
        cout << temp->data << " ";
        temp = temp->next;
        } while(temp != head);
    }
}

int main(){
    int A[5]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    createLL(A,size);
    printLL(head);
    splitLL(head,&head1,&head2);
    
    printLL(head1);
    printLL(head2);
    return 0;
}
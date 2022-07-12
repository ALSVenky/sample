#include<iostream>
using namespace std;
#include<stack>

class Queue{
private:
    stack<int> enqueueStk;
    stack <int> dequeueStk;
public:
    int dequeue();
    void enqueue(int x);
    void display();    
};
void Queue::enqueue(int x){
    enqueueStk.push(x);
}
int Queue::dequeue(){
    int x=-1;
    if(dequeueStk.empty()){
        if(enqueueStk.empty()){
            cout<<"Queue underFlow"<<endl;
            return x;
        }else{
            while(!enqueueStk.empty()){
                dequeueStk.push(enqueueStk.top());
                enqueueStk.pop();
            }
        }
    }
    x=dequeueStk.top();
    dequeueStk.pop();
    return x;
}
void Queue::display(){
    stack <int>tempdequeueStk=dequeueStk;
    stack <int>tempenqueueStk=enqueueStk;
    while(!tempdequeueStk.empty()){
        cout<<tempdequeueStk.top();
        tempdequeueStk.pop();
    }
    while(!tempenqueueStk.empty()){
        tempdequeueStk.push(tempenqueueStk.top());
        tempenqueueStk.pop();
    }
    while(!tempdequeueStk.empty()){
        cout<<tempdequeueStk.top();
        tempdequeueStk.pop();
    }
};
int main(){
    Queue q;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.display();
    cout<<endl;
    q.enqueue(6);
    q.enqueue(5);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.display();
    return 0;
}
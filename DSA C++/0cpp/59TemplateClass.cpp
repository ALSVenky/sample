#include <iostream>
using namespace std;
//  validity of template parameters are inside block only.

template<class T>
class stack{
    T *items;
    int top;
    int size;
    public:
    stack(int size){
        items=new T[size];
        top=-1;
    }
    bool isEmpty(){
        return (top==-1)?true:false;
    }
    void push(T x);
    T pop();
};
template<class T>
void stack<T>::push(T x){
    if(top==size){
        cout<<"stack is full!"<<endl;
    }
    else{
        items[++top]=x;
    }
}
template<class T>
T stack<T>::pop(){
    if(top==-1){
        cout<<"stack is empty.";
        return 0;
    }else{
        return items[top--];
    }
}
int main(){
    stack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(1432);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.isEmpty();
}
//used when we are calling the overrided functions with the help of pointers
#include<iostream>
using namespace std;
class parent{
    public:
    virtual void display(){
        cout<<"parent display function is executed"<<endl;
    }
};
class child : public parent{
    public:
    void display(){
        cout<<"child function is executed"<<endl;
    }
};

int main(){
    child c;
    parent *ptr =&c ; //actually base pointer cannot access the functions inside the child class but we made the function inside the parent class as virtual
    ptr->display();           //so the function inside the child class is executed as the object created is child
    return 0;
}
#include<iostream>
using namespace std;
class parent{
    public:
    void display(){
        cout<<"parent display function is executed"<<endl;
    }
    void hello(){
        cout<<"hello"<<endl;
    }
};
class child : public parent{
    public:
    void display(){
        cout<<"child function is executed"<<endl;
    }
};

int main() {
    parent p;
    p.display();
    p.hello();
    child c;
    c.display(); //here the child class display function will be executed but not the display function in parent class. this is called function overriding
    c.hello();  //here the parent class hello fuction will be executed since it inherits from parents class
    return 0;
}
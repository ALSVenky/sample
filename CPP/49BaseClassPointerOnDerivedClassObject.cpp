#include<iostream>
using namespace std;
class base{
    public:
    void func1(){
        cout<<"func1 of base class"<<endl;
    }
};
class derived : public base{
    public:
    void func2(){
        cout<<"func2 of derived class"<<endl;
    }
};

int main() {
    base *ptr;
    derived d;
    ptr =&d;
    ptr->func1();
    //ptr->func2(); //base class pointer cannot access the functions inside the derived class
    return 0;
}
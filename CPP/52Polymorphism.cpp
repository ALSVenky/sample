#include<iostream>
using namespace std;
class car{
    public:
    virtual void start()=0; //pure virtual function.the main aim of this is to achieve polymorphism.it forces the derived class to implement the function code
    //if there is a pure virtual function inside a class then we call it an abstract class 
    //we cannot initialize an object of abstract class but can initialize a pointer of abstract class(to achieve polymorphism)
    void stop(){
        cout<<"car started"<<endl;
    };
};
class audi: public car{
    void start(){
        cout<<"audi started"<<endl;
    }
    void stop(){
        cout<<"audi stopped"<<endl;
    }
};
class bmw: public car{
    void start(){
        cout<<"bmw started"<<endl;
    }
    void stop(){
        cout<<"bmw stopped"<<endl;
    }
};

int main() {
    audi audi1;
    car *ptr1=&audi1;
    ptr1->start();
    bmw bmw1;
    car *ptr2=&bmw1;
    ptr2->stop();
    return 0;
}
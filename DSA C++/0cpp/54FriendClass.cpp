#include<iostream>
using namespace std;
class demo2;//without declaration compiler throughs error when it come across demo2 inside class demo1
class demo1{
    int x=4;
    friend demo2;
};
class demo2{
    demo1 d;
    public:
    void fun(){
        cout<<d.x; //actually we cant access the private data of another class but we given a keyword friends. 
    }
};

int main() {
    demo2 d2;
    d2.fun();
    return 0;
}
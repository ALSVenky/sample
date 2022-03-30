#include<iostream>
using namespace std;
class rectangle {
    public:
    int length ;
    int breadth ;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
}; //semicolon is must after the class

int main(){
    rectangle r1;  //this tells that the object is created inside stack
    rectangle *p;  //pointer to a object
    p=&r1;  // this is also created inside stack 
    rectangle *q= new rectangle();  //this object is createed inside the heap
    r1.length=10; //dot operator is used for accessing the members of an object using variable name(object name)
    p->breadth=2;// arrow operator is used for accessing the members of an object using pointer
    q->length=3; 
    q->breadth=2; 
    cout<<p->area()<<endl;  //pointer can access the methods of class
    cout<<r1.area()<<endl;
    cout<<q->area()<<endl;

    return 0;

}
#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    //constructors //no return type is needed for constructors
    rectangle();
    rectangle(int l=0, int b=0){}
    rectangle(rectangle &rect){}
    //accessors //return type is must
    int getLength();
    int getBreadth();
    //mutators  //return type is must
    void setLength();
    void setBreadth();
    //facilitators
    int area();
    int perimeter();
    //enquiry   //return type can be bool or int
    bool isSquare();
    int isRhombus();
    //destructor
    ~rectangle();


}; //semicolon is imp
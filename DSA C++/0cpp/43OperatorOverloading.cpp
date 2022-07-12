
#include <iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;
    public:
    complex (int r=0,int i=0){
        real=r;
        img=i;
    }
    complex add(complex c){ //or complex operator+(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void print(){
        cout<<real<<"+("<<img<<"i)";
    }

};

int main() {
    complex c1(10,5);
    complex c2(1,4);
    complex c3;
    c3=c1.add(c2); //or c3=c1+c2;
    c3.print();
    return 0;
}

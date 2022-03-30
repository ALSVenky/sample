#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    public:
    complex (int r=0,int i=0){
        real=r;
        img=i;
    }
    complex operator+(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

};
int main(){
    complex c1(10,5);
    complex c2(3,4);
    complex c3;
    c3=c1+c2;
    cout << c3.real<<" "<<c3.img<<endl;

    return 0;
}
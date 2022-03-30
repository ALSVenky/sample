#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    public:
    complex(int r=0,int i=0){
        real = r;
        img=i;
    }
    friend complex operator+ (complex c1,complex c2){
        complex temp;
        temp.real=c1.real+c2.real;
        temp.img=c1.img+c2.img;
        return temp;
        
    }
};
int main() {
    complex c1(2,4);
    complex c2(4,7);
    complex c3;
    c3=c1+c2;
    cout<<c3.real<<" "<<c3.img<<endl;
    return 0;
}
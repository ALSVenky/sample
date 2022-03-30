#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    complex (int r=0,int i=0){
        real=r;
        img=i;
    }
    friend ostream & operator<<(ostream &out, complex &c);
};

ostream & operator<<(ostream &out, complex &c){
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}

int main(){
    complex c(10,4);
    cout<<c;
    return 0;
}

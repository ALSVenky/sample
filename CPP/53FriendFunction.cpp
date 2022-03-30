#include<iostream>
using namespace std;
class demo{
    private:
    int a=1;
    protected: 
    int b=4;
    public:
    int c=3;
    friend int func();  //friend key word makes the function to access the all tyoes of data of class demo
};
int func(){
    demo d;
    return d.a+d.b+d.c; 
}

int main() {
    cout<<func()<<endl;
    return 0;
}
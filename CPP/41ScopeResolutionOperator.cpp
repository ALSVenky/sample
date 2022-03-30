#include<iostream>
using namespace std;
class demo{
    
    public:
    void fun1(){  //inline function
        cout<<"inline function"<<endl ;  //if the logic of the function is less write as inline functions
    }
    void fun2(); 
    inline void fun3();
}; //semicolon is imp

void demo::fun2(){  //scope resolution operator is used here. it says that the function perimeter is in the scope of class rectangle
    cout <<"non-inline function"<<endl;
}
void demo::fun3(){ 
    cout <<"its a inline function even though written outside the class"<<endl;
}
int main(){
    demo d;
    d.fun1();
    d.fun2();
    d.fun3();
    return 0;

}

//inline functions are treated as the part of main functions. for non-inline functions the code is somewhere in the code section
//when the function comes it will go there and after it will come back to main function. whereas inline functio code is inside the main function
#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    [](){cout<<"this is a lambda function"<<endl;}();
    auto lambda=[](){cout<<"this is a lambda function assigned to variable lambda"<<endl;};
    lambda();
    auto sum=[](int x, int y){cout<<x+y;};
    sum(5,6);
}
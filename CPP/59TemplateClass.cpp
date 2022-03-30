#include <iostream>
using namespace std;
template<class T>
class stack{
    T s[10]; //we are using template here because so that the this class will run for any data type of stack
    int top();
    public:
    int push(T ,int x);
    T pop();
};
int main(){

}
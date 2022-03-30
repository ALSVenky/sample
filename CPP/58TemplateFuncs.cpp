#include <iostream>
using namespace std;
template<class T,class U>
void add(T x, U y){
        cout << x+y;
    }
int main(){
    add(10,2.5);
    return 9;
}
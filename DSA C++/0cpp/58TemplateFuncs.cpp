#include <iostream>
using namespace std;
template<class X>
X maximum(X a,X b){
    return a>b?a:b;
}
template<class T,class U>
void add(T x, U y){
        cout << x+y;
    }
int main(){
    add(10,2.5);
    cout<<endl;
    add(1,2);
    cout<<endl;
    cout<<maximum(5,3)<<endl;
    cout<<maximum(5.2,3.9)<<endl;
    return 0;
}
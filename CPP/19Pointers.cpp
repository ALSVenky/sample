#include <iostream>
using namespace std;
int main(){
    int x=10;
   int *p;//poiinter declaration.
   p=&x; //initialization.
   //int *p=&x;  //initializing aswell as declaration.
   cout<<*p<<endl;//10  //dereferencing = *p
   cout<<&x<<endl;  //address of variable x
   cout<<p <<endl;  //address of variable x
   cout<<&p<<endl;  //address of pointer variable p
    return 0;
}

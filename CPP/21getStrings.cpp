#include <iostream>
using namespace std;
int main(){
   char a[10],s[10];
   cout<<"enter name a ";
   cin.get(a,10); 
   cin.ignore();//if u dont use it then the second cin statemnt will take enter
//    (which we click after writing name a) as input and it wont ask for name s. 
// else use getline function in both places.
   cout<<"enter name s ";
   cin.get(s,10);
   cout <<a<<" "<<s<<endl;
    return 0;
}

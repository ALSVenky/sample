#include<iostream>
using namespace std;
int main (){
    int a=3,b=5,c=8;
    if (a>b && ++c>b){
        cout<<"hello"; //here this hello wont be printed and also value of c remains 8
    }
    cout << c<<endl;
    if (a<b && ++c>b){
        cout<<"hello ";
    }
    cout << c<< endl;
    
    
}
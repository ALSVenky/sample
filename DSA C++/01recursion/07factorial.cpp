#include <iostream>
using namespace std;

int factorial(int n){
    if(n<0){
        cout<<"enter non negative value";
        return 0;
    }
    if(n>0){
        return factorial(n-1)*n;
    }
    return 1;
}

//without using recursion
int fact(int n){
    if(n<0){
        cout<<"enter non negative value";
        return 0;
    }
    int p=1;
    for(int i=1;i<n+1;i++){
        p=p*i;
    }
    return p;
}

int main(){
    int n;
    cout <<"enter the non negative num ";
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<fact(n);
    return 0;
}
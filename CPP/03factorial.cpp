#include<iostream>
using namespace std;
int main(){
    int num,factorial=1;
    cout<<"enter the num: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        factorial=factorial*i;
    }
    cout<<factorial;
    return 0;
}
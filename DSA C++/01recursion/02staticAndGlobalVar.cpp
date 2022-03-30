#include<iostream>
using namespace std;
int y=1;
int rec(int n){
    static int x=3;
    if(n>0){
        x++;
        return rec(n-1)+x;
    }
    return 0;
}
int rec2(int n2){
    if (n2>5){
        y++;
        return rec2(n2-1)-y;
    }
    return 0;
}
int main(){
    int num=3;
    int num2=8;
    cout<<rec(num)<<endl;
    cout<<rec2(num2);
    return 0;
}
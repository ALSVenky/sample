#include<iostream>
using namespace std;
//perfect number--sum of factors of a number is equal to double the number.
int main(){
    int num,sumOfFactors=0;
    cout<<"enter the number ";
    cin >>num;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            sumOfFactors=sumOfFactors+i;
        }
    }
    if(sumOfFactors==2*num){
        cout<<"perfect number";
    }
    else{
        cout<<"not a perfect number";
    }

    return 0;
}
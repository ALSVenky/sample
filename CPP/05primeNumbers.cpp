#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout << "enter a number ";
    cin >>num;
    if(num==1){
        cout<<"composite";
    }else{
        for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<"not a prime";
    }else{
        cout<<"prime";
    }

    }
    
    
    return 0;
}

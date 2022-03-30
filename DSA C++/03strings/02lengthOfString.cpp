#include <iostream>
using namespace std;
int main(){
    char name[]="als venky";
    int count=0,i=0;
    for (i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;
    return 0;
}
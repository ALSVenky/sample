#include <iostream>
using namespace std;
int main(){
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int min=A[0];
    for(int x:A)
    if(x<min){
        min=x;
    }
    cout<<min;
    return 0;
}

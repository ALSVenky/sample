#include <iostream>
using namespace std;
int main(){
    int num,digit,duplicate;
    cout << "enter number ";
    cin>>num;
    duplicate=num;
    while(duplicate>0){
        digit=duplicate%10;
        duplicate=duplicate/10;
        cout<<digit<<" ";
    }
    return 0;
}

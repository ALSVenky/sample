#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the length of square side ";
    cin>>size;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

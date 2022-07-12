#include <iostream>
using namespace std;
int main(){
    int A[6]={};
    cout<<"enter values ";
    for (int i=0;i<6;i++){
        cin>>A[i];
    }
    int num;
    cout<<"enter number that is to be searched ";
    cin>>num;
    // bool found=false;
    // for(int i=0;i<10;i++){
    //     if(A[i]==num){
    //     cout<<i;
    //     found=true;
    //     }
    // }
    // if(found==false){
    //     cout<<"no such element is there in array.";
    // }
    for(int i=0;i<10;i++){
        if(A[i]==num){
        cout<<i;
        return 0;
        }
    }
    cout<<"not found";
    return 0;
}

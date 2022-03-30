#include <iostream>
using namespace std;
int main(){
    char arr[]="zyxcba",temp;
    int pass,size=sizeof(arr)/sizeof(arr[0]);
    bool swapped=true;
    for(pass=0;pass<size-1 && swapped==true;pass++){
        swapped =false;
        for(int j=0;j<size-pass-1;j++){
            if(arr[j]>arr[j+1]){
                swapped=true;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
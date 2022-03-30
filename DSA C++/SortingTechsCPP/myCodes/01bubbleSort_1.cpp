#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        count++;
        if(swapped==false){
            break;
        }
    }
    cout<<count<<endl;
}
int main(){
    int arr[]={5,1,2,3,4,9,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
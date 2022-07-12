#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    int count=0;
    int swaps=0;
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
                swapped=true;
            }
        }
        count++;
        if(swapped==false){
            break;
        }
    }
    cout<<count<<endl;
    cout<<swaps<<endl;
}
int main(){
    int arr[]={8,22,7,9,31,19,5,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
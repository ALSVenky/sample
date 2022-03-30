//! bubble sort for descending order

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=n-1;j>i;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
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
    int arr[]={8,7,6,5,4,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition (int arr[], int start, int end,int len){
    int pivot=arr[start];
    int pivot_index=start;
    while(start<end){
        while(start<len && arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[pivot_index],arr[end]);
    return end;
}
void quickSort(int arr[],int start,int end,int len){
    int pi=partition(arr,start,end,len);
    quickSort(arr,start,pi-1,len);
    quickSort(arr,pi+1,end,len);
}
int main(){
    int arr[]={5,2,4,7,0,8,3,1};
    int len=sizeof(arr)/sizeof(int);
    quickSort(arr,0,len-1,len);
    for (int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
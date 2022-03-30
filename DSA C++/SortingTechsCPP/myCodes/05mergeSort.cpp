#include <iostream>
using namespace std;
int merging(int*arr,int lb,int ub,int mid){
    int i=lb,j=mid+1,k=ub;
    int arr2[ub]={};
    while(i<=mid && j<=ub ){
        if(arr[i]<arr[j]){
            arr2[k]=arr[i];
            i++;k++;
        }else{
            arr2[k]=arr[j];
            j++;k++;
        }
    }
    return *arr;
}
void mergeSort(int *arr,int lb,int ub){
    if(lb<ub){
        int mid=lb+ub/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merging(arr,lb,ub,mid);
    }
    
}
int main(){
    int arr[]={5,1,2,6,8,4,2,3};
    int n=8,lb=0,ub=7;
    mergeSort(arr,lb,ub);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
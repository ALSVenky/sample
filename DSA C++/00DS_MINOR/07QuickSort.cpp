#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int low,int high){
    int pivot =arr[low];
    int i=low,j=high;
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }while(i<j);
    swap(&arr[low],&arr[j]);
    return j;
}
void QuickSort(int arr[],int low,int high){  //low--starting index and high --ending index
    int pi;
    if(low<high){
        pi=partition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout <<arr[i]<<" ";
    }
}
int main(){
    int arr[]={0,1,0,2,0,1,0,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,size);
    cout<<size<<endl;
    printArray(arr,size);
    return 0;
}
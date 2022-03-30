#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

int findMax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void insert(int *bins,int i){

}
int Delete(int **bins,int n){

}

void binSort(int arr[],int n){
    int max=findMax(arr,n);
    int **bins;
    bins=new int *[max+1];
    for(int i=0;i<max+1;i++){
        bins[i]=0;
    }
    for(int i=0;i<n;i++){
        insert(bins[arr[i]],arr[i]);
    }
    int i=0,j=0;
    while(i<max+1){
        while(bins[i]!=0){
            arr[j++]=Delete(bins,i);
        }
        i++;
    }
    delete []bins;
}
int main(){
    int arr[]={2,3,1,5,8,6,4,2,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    binSort(arr,n);
    return 0;
}
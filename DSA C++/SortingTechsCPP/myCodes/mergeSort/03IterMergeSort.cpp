#include<iostream>
using namespace std;
void Merge(int A[],int low,int mid,int high){
    
    int B[high+1];
    int i=low,j=mid+1,k=low;
    while(i<=mid && j<=high){
        if(A[i]<=A[j]){
            B[k++]=A[i++];
        }else{
            B[k++]=A[j++];
        }
    }
    while(i<=mid){
        B[k++]=A[i++];
    }
    while(j<=high){
        B[k++]=A[j++];
    }
    for (int i=low; i<=high; i++){
        A[i] = B[i];
    }
}
void IterMergeSort(int A[],int n){
    int i=0,p,low,mid,high;
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i=i+p){
            low=i;
            high=i+p-1;
            mid=(low+high)/2;
            Merge(A,low,mid,high);
        }
    }
    if (p/2 < n){
        Merge(A, 0, p/2-1, n-1);
    }
}
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[]={1,3,5,7,12,2,0,5,8,4,6,8,9,10};
    int size=sizeof(A)/sizeof(A[0]);
    IterMergeSort(A,size);
    printArray(A,size);
    return 0;
}
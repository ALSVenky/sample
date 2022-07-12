//merging two sorted lists.
#include <iostream>
using namespace std;
int C[100]={};
void merge(int A[],int B[],int m,int n){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]>B[j]){
            C[k++]=B[j++];
        }else{
            C[k++]=A[i++];
        }
    }
    for(i;i<m;i++){
        C[k++]=A[i];
    }
    for(j;j<m;j++){
        C[k++]=B[j];
    }
}
void printMergedArray(int m, int n){
    for(int i=0;i<m+n;i++){
        cout<<C[i]<<" ";
    }
}
int main(){
    int A[]={1,3,5,7,9};
    int B[]={2,4,6,8};
    int m=sizeof(A)/sizeof(A[0]);
    int n=sizeof(B)/sizeof(B[0]);
    merge(A,B,m,n);
    printMergedArray(m,n);
    return 0;
}
#include<iostream>
using namespace std;
void sort(int A[],int B[],int n){
    int l=0,mid,h=n-1;
    mid=(l+h)/2;
    cout<<mid<<endl;
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=h){
        if (A[i] < A[j]){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= h){
        B[k++] = A[j++];
    }
    for (int i=l; i<=h; i++){
        A[i] = B[i];
    }
}
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[]={1,3,5,7,12,4,6,8,9,10};
    int size=sizeof(A)/sizeof(A[0]);
    int B[size];
    sort(A,B,size);
    printArray(A,size);
    return 0;
}
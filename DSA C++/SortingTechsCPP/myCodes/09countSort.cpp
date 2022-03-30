#include <iostream>
int findMax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void countSort(int arr[], int n){
    int *C,max=findMax(arr,n);
    C=new int(max);
    for(int i=0;i<max+1;i++){
        C[i]=0;
    }
    for(int j=0;j<n;j++){
        C[arr[j]]++;
    }
    int j=0,i=0;
    while(j<max+1){
        if(C[j]>0){
            arr[i++]=j;
            C[j]--;
        }
        else{
            j++;
        }
    }
}
using namespace std;
int main(){
    int arr[]={5,2,3,6,9,4,5,7,1,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=findMax(arr,n);
    countSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
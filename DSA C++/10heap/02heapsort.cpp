#include <iostream>
using namespace std;
void insert(int H[],int index){
    int i=index;
    int temp=H[i];
    while(i>1 && temp > H[i/2]){
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;
}
void createHeap(int H[],int n){
    for(int i=2;i<n;i++){
        insert(H,i);
    }
}
int Delete(int H[],int n){
    int value=H[1];
    H[1]=H[n];
    int i=1,j;
    j=i*2;
    while(j<n-1){
        if(H[j]<H[j+1]){
            j=j+1;
        }
        if(H[j]>H[i]){
            int temp=H[i];
            H[i]=H[j];
            H[j]=temp;
            i=j;
            j=j*2;
        }
        else {
            break;
        }
    }
    return value;
}
void heapSort(int H[],int n){
    for(int i=n-1;i>1;i--){
        cout<<Delete(H,i)<<" ";
    }
    cout<<H[1]<<endl;
}
int main(){
    int H[]={0,10,20,30,25,5,40,35};
    int n=sizeof(H)/sizeof(int);
    createHeap(H,n);
    // for(int i=1;i<n;i++){
    //     cout<<H[i]<<" ";
    // }
    // cout<<endl;
    heapSort(H,n);
    return 0;
}
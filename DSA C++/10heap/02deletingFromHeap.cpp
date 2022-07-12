//! from heap, you can only delete root element.
#include <iostream>
using namespace std;
void insert(int H[],int n){
    int i=n,temp;
    temp=H[i];
    while(i>1 && temp >H[i/2]){
        H[i]=H[i/2];
        i/=2;
    }
    H[i]=temp;
}
void createHeap(int H[],int n){
    for (int i=2;i<n;i++){
        insert(H,i);
    }
}
int Delete(int H[],int n){
    int value=H[1];
    H[1]=H[n];
    H[n]=value;
    int i=1,j=2*i;
    while(j<n-1){
        if(H[j]<H[j+1]){
            j=j+1;
        }
        if(H[j]>H[i]){
            int temp=H[i];
            H[i]=H[j];
            H[j]=temp;
            i=j;
            j=2*j;
        }else{
            break;
        }
    }
    return value;
}
int main(){
    int H[]={0,10,20,30,25,5,40,35};
    int n=sizeof(H)/sizeof(int);
    createHeap(H,n);
    for(int i=1;i<n;i++){
        cout<<H[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;i>1;i--) { 
        cout<<"deleted value is"<<Delete(H,i)<<endl; 
    }
    // for(int j=1;j<n;j++){
    //     cout<<H[j]<<" ";
    // }
    
    return 0;
}
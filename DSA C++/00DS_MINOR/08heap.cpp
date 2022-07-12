// !  heap is a complete binary tree.
// !  height of a complete binary tree is always logn. 
// !  therefore the height of heap is also logn.

#include<iostream>
using namespace std;

void insert(int H[],int index){  //! n is the index of recently stored element.
    int temp,i=index;
    temp=H[index];
    if(index == 1)
    H[i]=temp;
    else
    {while(i>1 && temp<H[i/2]){ 
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;}
}
void createHeap(int H[],int n){

    for(int i=1;i<(n);i++){
        insert(H,i);
    }
    //printing the heap
    for(int i=1;i<n;i++){
        cout<<H[i]<<" ";
    }
    cout<<endl;
}
int Delete(int H[],int n){
    int value=H[1];
    H[1]=H[n];
    H[n]=value;
    int i=1,j=2*i;
    while(j<n-1){
        if(H[j]>H[j+1]){
            j=j+1;
        }
        if(H[j]<H[i]){
            int temp=H[i];
            H[i]=H[j];
            H[j]=temp;
            i=j;
            j=2*j;
        }else{
            break;
        }
    }
    if (j<=n-1){
        if(H[j]<H[i]){
            int temp=H[i];
            H[i]=H[j];
            H[j]=temp;
        }
    }
    return value;
}

int main(){
    int H[]={0,10,20,30,25,5,40,35};
    int n=sizeof(H)/sizeof(int);
    createHeap(H,n);
    int k=2;
    for(int i=n-1;i>n-k;i--) { 
        // cout<<"deleted value is"<<Delete(H,i)<<endl; 
        Delete(H,i);
    }
    cout<<Delete(H,n-k);
    return 0;
}
// !  heap is a complete binary tree.
// !  height of a complete binary tree is always logn. 
// !  therefore the height of heap is also logn.

#include<iostream>
using namespace std;

void insert(int H[],int index){  //! n is the index of recently stored element.
    int temp,i=index;
    temp=H[index];
    while(i>1 && temp>H[i/2]){ //! if we take temp<H[i/2] condition, it will create min heap
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;
}
void createHeap(int H[],int n){
    for(int i=2;i<(n);i++){
        insert(H,i);
    }
    //printing the heap
    for(int i=1;i<n;i++){
        cout<<H[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int H[]={0,10,20,30,25,5,40,35};
    int n=sizeof(H)/sizeof(int);
    createHeap(H,n);
    
    return 0;
}
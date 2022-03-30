#include<iostream>
using namespace std;
int main(){
    int *p,*q;
    p=(int *)malloc(sizeof(int)*3);  //p= new int[5];
    p[0]=3;p[1]=4;p[2]=5;
    q=(int *)malloc(5*sizeof(int));
    for(int i=0;i<3;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=nullptr;
    for(int j=0;j<3;j++){
        printf("%d ",p[j]);
    }
    return 0;
}
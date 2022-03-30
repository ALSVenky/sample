#include<iostream>
using namespace std;
int main(){
    //decalration of 2d array
    int a[2][3]={{1,2,3},{4,5,6}}; //created completely inside stack
    int *b[3]; //created partially inside stack(arr of pointers) and partially inside heap(b[0],b[1],b[2])
    b[0]=new int[4];
    b[1]=new int[4];
    b[2]=new int[4];
    b[1][2]=3;
    int **c; //created completetly inside heap except the pointer to the aray of pointers(i.e. c)
    c=(int**)malloc(2*sizeof(int *));  //c=new int*[2];
    c[0]=new int[3]; //c[0]=(int *)malloc(3*sizeof(int));
    c[1]=new int[3];
    c[2]=new int[3];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << b[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
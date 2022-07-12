#include <iostream>
using namespace std;
int main(){
    //declaration types.
    int A[2][3]={{4,6,7},{15,31,22}};
    int B[2][3]={4,6,7,15,31,22};
    //these are contiguous memory locations.
    int C[2][3]={4,6};//remaining will be zero by default.
    int D[2][3];
    //printing out 2d array.
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing out 2d array using for each loop.
    for(auto& x:B)
    for(int y:x)
    cout<<y<<" ";
    cout<<endl;
    //adding two arrays.
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            D[i][j]= A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

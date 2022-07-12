#include <iostream>
using namespace std;
int recursion(int n){
    if(n>0){
        return recursion(n-1)+n;
    }
    return 0;
}

// without using recursion
int norecursion(int n){
    int s=0;
    for(int i=1;i<n+1;i++){
        s=s+i;
    }
    return s;
}

int main(){
    int n;
    cout<<"Enter the no of terms ";
    cin>>n;
    cout<<recursion(n)<<endl;
    cout<<norecursion(n);
    return 0;
}

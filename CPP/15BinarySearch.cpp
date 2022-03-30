#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int A[]={4,6,8,10,12,14,16};
    int l=0,h=6,m,x=10;
    while(l<=h)
    {
        m=((l+h)/2);
        if(x==A[m]){
            cout<<m;
            return 0;
        }
        else if(x>A[m]){
        l=m+1;
        }else {
        h=m-1;
        }
    } 
    cout<<"not found"; 
    return 0;
}

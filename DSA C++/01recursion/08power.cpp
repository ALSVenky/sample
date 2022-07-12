#include <iostream>
using namespace std;

int power(int x,int n){
    if(n==0 && x==0){
        cout<<"its undefined";
        return 0;
    }
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}
//faster recursive power function
int fpower(int x,int n){
    if(n==0 && x==0){
        cout<<"its undefined";
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return fpower(x*x,n/2);
    }
    return x*fpower(x*x,(n-1)/2);
}

//without recursion
int pow(int x,int n){
    if(n==0 && x!=0){
        return 1;
    }
    else if(n!=0 && x==0){
        return 0;
    }
    else if(n==0 && x==0){
        cout<<"its undefined";
        return 0;
    }else{
        int res=x;
        for(int i=2;i<n+1;i++){
        res=res*x;
        }
        return res;
    }
}

int main(){
    int x,n;
    cout <<"enter the base num ";
    cin>>x;
    cout <<"enter the power num ";
    cin>>n;
    cout<<power(x,n)<<endl;
    cout<<fpower(x,n)<<endl;
    cout<<pow(x,n);
    return 0;
}
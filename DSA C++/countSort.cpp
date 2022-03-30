#include<iostream>
#include<algorithm>
// #include<c.math>
using namespace std;
int main(){
    int arr[] ={0,1,1,2,3,4,5,7,2,5,6,7,1,2,9};//{5,2,3,4,8,1,4,2,0,9};
    int n=15;
    int dup[n];
    int max=*max_element(arr,arr+n);
    // cout<<max;
    int count[max+1]={0};
    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    // for(int j=0;j<max;j++){
    //     cout<<count[j];
    // }
    for(int j=1;j<max;j++){
        count[j]=count[j]+count[j-1];
    }
    // for(int j=0;j<max;j++){
    //     cout<<count[j];
    // }
    for (int k=n-1;k>=0;k--){
        dup[--count[arr[k]]]=arr[k];
    }
    
    // for(int j=0;j<n;j++){
    //     cout<<dup[j]<<endl;
    // }
    for(int l=0;l<n;l++){
        arr[l]=dup[l];
    }
    for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}


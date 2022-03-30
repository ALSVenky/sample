#include <iostream>
#include<algorithm>
using namespace std;
int binarySearch(int* arr,int k){
    int f=0,l=sizeof(arr)/sizeof(arr[0]),m;
    while(f<=l){
        m=(f+l)/2;
        if(arr[m]==k){
            return m;
        }
        else if(arr[m]<k){
            f=m+1;
        }
        else {
            l=m-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,4,6,8,9,21,34,56,75};
    cout<<"number to be searched: ";
    int k;
    cin>>k;
    int n=binarySearch(arr,k);
    cout<<"the required value is at index "<< n;

    return 0;
}
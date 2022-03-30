
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={5,3,6,8,9,0,2,7,5,1};
    int n=10;
    for (int i=1;i<n;i++){
        int anchor =arr[i];
        int j=i-1;
        while(j>=0 && anchor<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
    }
        
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

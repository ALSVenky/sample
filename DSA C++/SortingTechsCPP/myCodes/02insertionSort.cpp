//? insertion sort is more compatable for linked lists than arrays. since in an array swaps are needed whereas in linkedlist, no need of swapping

// * insertion sort is stable and adaptive(if the array is already sorted (in ascending order) then the algoritm should take min time); 
// * if array is already sorted, total n-1 comparisons and 0 swaps are performed.
// ? worst case of insertion sort is array sorted in descending order and best case is array sorted in ascending order

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){       //! for n elements n-1 passes are carried out.
        int anchor=arr[i];
        int j=i-1;
        while(j>=0 && anchor <arr[j]){  
        //! max no.of comparisons for nth pass=n; 
        //! max no.of swaps for nth pass=n;
        //! therefore, for n-1 passes, the total no.of comparisons are 1+2+3....n-1==>O(n*n) is time complexity;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=anchor;
    }
}
int main(){
    int arr[]={5,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
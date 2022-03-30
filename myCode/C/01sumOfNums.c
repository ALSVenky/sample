#include <stdio.h>
int sumOfNums(int);
int main(){
    int n= 100;
    printf("sum of %d numbers = %d ",n,sumOfNums(n));
    return 0;
}

int sumOfNums(int n){
    // if (n==1){
    //     return 1;
    // }
    // return n+sumOfNums(n-1);
    int i=1,sum=0;
    while(i<=n){
        sum=sum + i++;
        // i++;
    }
    return sum;
}

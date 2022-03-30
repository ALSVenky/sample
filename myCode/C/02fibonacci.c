#include <stdio.h>
int fib(int);
int main(){
    int i;
    scanf("%d", &i);
    for (int x=1;x<=i;x++){
        
        printf("%d,",fib(x));
    }
    // fib(i);
    // printf("%d",i);
}
int fib(int x){
    if (x==1 || x==2){
        return 1;
    }
    return fib(x-1)+fib(x-2);
}
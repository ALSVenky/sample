#include <stdio.h>
void pattern(int);
int main(){
    pattern(5);
    return 0;
}

void pattern(int n){
    for (int i=0;i<n;i++){
        for (int j=n;j>(i+1);j--){
            printf("* ");
        }
        printf("\n");
    }
    
}




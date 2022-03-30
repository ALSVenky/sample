#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[10]="01a2sd1f0";
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if(str[i]=='0'){
            count++;
        }
        i++;
    };
    printf("%d",count);
    return 0;
}

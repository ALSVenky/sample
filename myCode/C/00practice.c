#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000]="012h1a2r3r4y5";
    // scanf("%s",s);
    // char num[]={'0','1','2','3','4','5','6','7','8','9'};
    char num[]="0123456789";
    char *ptr=num;
    int count=0;
    for (int x=0;x<strlen(s);x++){
        for (int i=0;i<strlen(s);i++){
            if (s[i]==*ptr){
                count++;               
            }
            ptr++;
        }
    
    }
    printf("%d ",count);
    return 0;
}



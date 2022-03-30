#include <stdio.h>

int main() {
    int n[4]={1,2,3,5};
    int *ptr=n;
    printf("%u\n",*ptr);
    ptr=ptr+2;
    printf("%u\n",*ptr);
    
    
    return 0;

}

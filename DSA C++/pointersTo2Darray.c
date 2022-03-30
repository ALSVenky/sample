#include <stdio.h>

int main(){
    int a[3][3] = {{1,2,3},{4,200,6},{7,8,9}};
    unsigned int x[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };

    printf("%d\n",(a+1)+1);
    printf("%d\n",**((a+1)+1));
    printf("%d\n",(*(a+1)+1));
    printf("%d\n",*(*(a+1)+1));
    printf("%d\n",**(a+1));     // *(*(a+1)+0)
    printf("%d\n",(**(a+1)+1));
    printf("%d\n",(((**a)+1)+1)); // ((*(*(a+0)+0)+1)+1)

    printf("%u, %u, %u\n", x, *x, **x);
	printf("%u, %u, %u\n", x+1, *(x+1), **(x+1));
	printf("%u, %u, %u\n", x+2, *(x+2), **(x+2));
	printf("%u, %u, %u\n", x+3, *(x+3), **(x+3));
    printf("%u,%u, %u", x+3, *(x+3),*(x+2)+3);
    return 0;
}
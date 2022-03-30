#include <stdio.h>
// using namespace std
int main(){
    struct book{
        char name;
        int pages;
        float price;

    };
    int x;
    struct book b[3];
    printf("enter name,page count, price of book");
    for(int i=0;i<=2;i++){
        scanf("%c %d %f",&b[i].name ,&b[i].pages ,&b[i].price);
        while((x=getchar()!='\0'));
    };
    for (int f=0;f<=2;f++){
        printf("%c %d %f\n", b[f].name, b[f].pages, b[f].price);

    };
    
    
    

    return 0;
}
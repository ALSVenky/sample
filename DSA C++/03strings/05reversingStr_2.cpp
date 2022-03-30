#include<iostream>
using namespace std;
void swap(char *x,char *y){
    if(*x!=*y){
        char t=*x;
        *x=*y;
        *y=t;
    }
}
int main(){
    char name[]="fm ffo kcuf";
    int i,j;
    for( j=0;name[j]!='\0';j++){       
    }
    j=j-1;
    for(i=0;i<j;j--,i++){
        swap(&name[i],&name[j]);
    }
    for(int i=0;name[i]!='\0';i++){ 
    cout<<name[i]<<"";
    }
    return 0;
}
#include <iostream>
using namespace std;
int count=0;
void swap(char *x,char *y,int *swapped){
    if(*x!=*y){
        char t=*x;
        *x=*y;
        *y=t;
        *swapped = 1;
        count++;
    }
}

int main(){
    char s[]="level";
    int i;
    for(i=0;s[i]!='\0';i++){

    }
    i=i-1;
    int swapped=0;
    for(int j=0;j<i;i--,j++){
        if(swapped==0){
            swap(&s[i],&s[j],&swapped);
        }
    }
    if (swapped ==0){
        cout<<"It's a palindrome";
    }else{
        cout<<"It's not a palindrome";
    }
    cout<<endl<<count;
    return 0;
}
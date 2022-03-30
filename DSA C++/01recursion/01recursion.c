#include<stdio.h>
void rec(int n){
    if(n>0){
        printf("%d ",n);
        // cout<<n<<endl;
        rec(n-1);
    }

}
void rec2(int n2){
    if (n2>5){
        rec2(n2-1);
        printf("%d ",n2);
        // cout<<n2<<endl;
    }
    
}
int main(){
    int num =3;
    int num2=8;
    rec(num);    
    rec2(num2);
    return 0;
}
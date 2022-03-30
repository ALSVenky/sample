#include<iostream>
using namespace std;
int validate(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if (!((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90)||(s[i]>=48 && s[i]<=57))){
            return 0;
        }
    }
    return 1;
}
int main(){
    char name[]="fasdlwio012efj";
    if(validate(name)){
        cout<<"valid string";
    }else{
        cout<<"invalid string";
    }
    return 0;
}
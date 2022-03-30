#include<iostream>
using namespace std;
int main(){
    char name[]="sSassy";
    char name2[]="sSassz";
    int i,j;
    for(j=0,i=0;name[i]!='\0' && name2[j]!='\0';i++,j++){
        if(name[i]!=name2[j]){
            break;
        }
    }
    //cout<<name[i]<<name2[j];
    if(name[i]>name2[j]){
        printf("%s is bigger.",name);
    }else if(name[i]<name2[j]){
        printf("%s is bigger.",name2);
    }else{
        printf("both are same.");
    }
    return 0;
}
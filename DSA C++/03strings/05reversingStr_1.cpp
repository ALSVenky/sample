#include<iostream>
using namespace std;
int main(){
    char name[]="sSassy";
    int i,j;
    for( i=0;name[i]!='\0';i++){       
    }
    i=i-1;
    char r[i+1];
    for(j=0;i>=0;i--,j++){
        r[j]=name[i];
    }
    r[j]='\0';
    for(int i=0;r[i]!='\0';i++){ 
    cout<<r[i]<<" ";
    }
    return 0;
}
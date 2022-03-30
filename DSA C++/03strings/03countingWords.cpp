#include<iostream>
using namespace std;
int main(){
    char s[]="Als  Venky..!";
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' ' && s[i-1]!=' '){//checking for consecutive spaces and considering them as one space
            count++;
        }
    }
    cout<<count+1;
    return 0;
}
#include <iostream>
#include<cstring>
using namespace std;

int main(){
    char d[10]="venkey";
    char e[5]="k";
    char f='k';
    char g='e';
    char h='e';
    cout<<strstr(d,e)<<endl; //key
    cout<<strchr(d,f)<<endl; //key 
    cout<<strchr(d,h)<<endl; //enkey  //gives first occurence of e
    cout<<strrchr(d,g)<<endl; //ey  //gives right most(last) occurence of e


//string comparision... strcmp(str1,str2)  
//--gives -ve if str1<str2
//gives 0 if str1=str2
//gives +ve if str1>str2  all these comparisions are as per english dictionary.
//small case letters are larger than captial letters as per ASCII values
    char t[10]="Als";
    char u[10]="als";
    cout<<strcmp(t,u)<<endl;  //-ve
    cout<<strcmp(u,t)<<endl;  //+ve
    return 0;
}

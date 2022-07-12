#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char x[12]="hello mr. ";
   char s[20]="alsvenky";
   char a[20]="hello world";
   cout<<strlen(a)<<endl ; //u need to include cstring library //includes spaces
   cout <<strcat(x,s)<<endl;     //strcat(destination,source)
   //    destination = destination + source
   cout<< strncat(s,a,5)<<endl; //strncat(destination,source,length) //length is the number of chars to be concated from sourse. 
   cout<<strlen(x)<<endl ;  //18, it exceded initial declaration(12)

   char v[5]="hell";
   char e[5];
   strcpy(e,v);
   //strncpy(e,v,3);
   cout<<e<<endl;

    return 0;
}

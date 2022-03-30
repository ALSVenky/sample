#include <iostream>
using namespace std;
int main(){
   int size;
   cout<<"enter the length of base side ";
   cin>>size;

   for(int i=1;i<=size;i++){
       for(int j=1;j<=size-i+1;j++){
           cout<<"* ";
       }
       cout<<endl;
   }

   for(int i=1;i<=size;i++){
       for(int j=1;j<=i;j++){
           cout<<"* ";
       }
       cout<<endl;
   }

   for(int i=1;i<=size;i++){
       for(int j=1;j<=size;j++){
           if(i<=j){
               cout<<"* ";
           }else{
               cout<<"  ";
           }
       }
       cout<<endl;
   }

   for(int i=1;i<=size;i++){
       for(int j=1;j<=size;j++){
           if(i+j>size){
               cout<<"* ";
           }else{
               cout<<"  ";
           }
       }
       cout<<endl;
   }

   return 0;
}

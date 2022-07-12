#include <iostream>
using namespace std;
int main(){
   char s[10];  //can hold a char array of length 9chars and one null character.null chaar is included automatically
   cout<<"enter name ";  // ALS venky
   cin>>s; 
   cout <<s; // only ALS will be printed.
   char a[10];
   cout<<"enter name"; // ALS venky
   cin.get(a,10);  //entire name will be printed upto nine chars(including spaces).
   cin.getline(a,10);
   cout<<a;
   return 0;
}

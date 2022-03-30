#include <iostream>
#include<string>
using namespace std;
int main(){
   string s="als venky";
   string s2="ill";
   char arr[10];
   s.copy(arr,s.length()); //we can write any length to be copied instead of s'length()which copies entire string
   //using copy wont include null char 
   arr[s.length()]='\0'; //without this statement it wont include a null character 
   cout<<arr <<endl;
   cout<<s<<endl;
   cout<<s.find("ven")<<endl; //will give the index of v in string.
   cout<<s.find('k')<<endl; //will give the index of k.
   cout<<s.rfind('e'); //gives index of e that is last in the string
   //if the result if more than string length then it is invalid index, that means there is no such char in string.
   cout<<s.find_first_of('v',0);//gives first v index starting(included) from the 0th index
   cout<<s.find_first_of('v',5);//gives first v index starting(included) the 5th index 
   cout<<s.find_first_of("ve",0); //gives index of either v or e which comes first.
   cout<<s.find_last_of('v');//gives last v index
   cout<<s.substr(2); //gives the sub string that starts from index 2 untill end;
   cout<<s.substr(2,4); //gives the sub string that starts from index 2 with a length of 4chars.
   cout<<s.compare(s2); //this is similar to str.cmp in previous codes
return 0;
}

#include <iostream>
#include<string>
using namespace std;
int main(){
    string s="baby";
    string a="hello";
    cout<<s.at(1); //gives the char at 1st index
    cout<<s[1];//gives same as above
    s[3]='e'; //we can even modify the string using subscrpt method([i])
    cout<<s<<endl;//babe
    a=a+s;//concatination
    a=a+"babee";//concatination

return 0;
}

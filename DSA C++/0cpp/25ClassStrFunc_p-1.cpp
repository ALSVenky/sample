#include<iostream>
#include<string>

using namespace std;
int main(){
    string s="alsv";
    cout<<s.length()<<endl; //4
    cout<<s.size()<<endl;   //4
    cout<<s.capacity()<<endl;  //gives the capacity
    s.resize(20) ;  //to change the capacity and makes the capacity more than we entered in braces
    cout<<s.max_size()<<endl; 
    s.clear() ; 
    cout<<s.empty()<<endl; //1 if empty else gives 0.
    s.append("bye"); 
    s.insert(4,"enky") ; //alsvenky //it will be inserted in 4th place. remember it starts from 0 
    s.insert(4,"enky",2) ; //alsven  //it only insert 2chars from given string.
    s.replace(2,1,"key"); //alkeyv //here 2 is the index(included) 1 is the size of string to be replaced starting from index2 ,it replaces with key
    s.erase(); //its like clear() function
    s.push_back('z'); //alsvz //inserts a single char at end..we cant push a string.
    s.pop_back();//als //removes one char from the end. its like backspace
    string s2="venkii";
    s.swap(s2); //it simply swaps to strings.

return 0;
}

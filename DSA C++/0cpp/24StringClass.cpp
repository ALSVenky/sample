#include <iostream>
#include<string>  //header file for class string.
using namespace std;
int main(){
    string str; //here str is an obj of type string.
    //declaring string like this will allocate a large space in memory(we call this as capacity), so that it will expand if needed.
    //if modified string is even more than the capacity, then a new large capacity will be created in memory and the complete string is replaced to new capacity.
    cout<<"enter anything ";
    //cin>>str;//it will take only the first word.
    getline(cin,str);//it will take a string untill it comeacross new line character(enter).
    cout<<str<<endl;
    
    


return 0;
}

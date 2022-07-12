//pass by value 
//any change in formal parametres doesnot change actual parametres
#include <iostream>
#include<string>
using namespace std;
int swap(int x, int y){  //here x and y are formal parameters 
    int temp;
    temp=x;       //these x and y are automatically deleted after the execution of function code
    x=y;
    y=temp; 

}
int main(){
    int a=2,b=3;    //a and b are actual parameters
    swap(a,b);
    cout<<a<<b<<endl; //it wont swap the values. since only the copy of values of a,b are copied to x,y .
    //the copied values will get interchanged but it wont effect the original values. 
    //this is basically pass by value method.
    return 0;
}

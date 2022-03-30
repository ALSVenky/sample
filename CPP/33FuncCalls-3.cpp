//pass by reference

#include <iostream>
#include<string>
using namespace std;
void swap(int &x, int &y){   //x and y act as references to a and b
    int temp;
    temp=x;       
    x=y;
    y=temp; 
} 

int main(){
    int a=2,b=3;    //a and b are actual parameters
    swap(a,b);   
    cout<<a<<" "<<b<<endl; 
    return 0;
}

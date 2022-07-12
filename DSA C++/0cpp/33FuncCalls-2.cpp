//pass by address 

#include <iostream>
#include<string>
using namespace std;
void swap(int *x, int *y){  //here x and y are formal parameters and are pointer variables
    int *temp;
    *temp=*x;       
    *x=*y;
    *y=*temp; 
} 

int main(){
    int a=2,b=3;    //a and b are actual parameters
    swap(&a,&b);   //here we are passing the address not the value. hence the swapping takes place
    cout<<a<<" "<<b<<endl; 
    return 0;
}

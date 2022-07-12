//2 types are there
#include <iostream>
using namespace std;
//method 1
float Div(int a,int b){  //float Div(int a,int b) throw(int) //this is optional whether u mention the throw type in function declaration or not.
    float c=0;            //if u declared throw() without anythng inside bracs that means the function doesnt throw any exception.
    if(b==0){
        throw 1;  //u can throw int,float,char,string,object of your own class or object of the built in class called exception......
    }else{
        c=a/b;
    }
    return c;
}
int main(){
    int a,b;
    float c;
    cout <<"enter the values of a and b ";
    cin>>a>>b;
    try{         //u can even have a try and catch inside the try block//that means nested try 
        Div(a,b);
        cout<<"division of a and b gives "<<c<<endl;
    }
    catch(int x){  //we can have multiple catch blocks to catch diff data type as a single catch can catch only only datatype
        cout<<"b cannot have a zero value."<<endl<<"enter value of b ";   //if u dont know the data type to catch use catch(...) this is called catch  all block
        cin>>b;                  //catch all block must be kept lost.
        cout<<Div(a,b) ;     //if u have clsses inside catch bracs the oreder of catch block must be like (grandchild,child,parent).
    }
    return 0;
}
//method 2

// float Div(int a, int b){
//     try{
//         if(b==0){
//             throw 1;
//         }
//         int c=a/b;
//         cout<<c;
//     }
//     catch(int x){
//         cout <<"b cannot be zero"<<endl;
//         cout<<"enter b again ";
//         cin>>b;
//         Div( a, b);
//     }
//     return 0;
//     }
// int main(){
//     int a,b,c;
//     cout <<"enter the values of a and b ";
//     cin>>a>>b;
    
//     Div(a,b);
    
// }

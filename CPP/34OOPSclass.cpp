//illustration of basic class

#include<iostream>
using namespace std;

class rectangle{
    //data  or attributes
    public:  //by default the data in a class is private. to make it access inside main function, use public 
    int length;
    int breadth;
    //functions or methods 
    int area(){
        return (length*breadth);
    }
    int perimeter(){
        return 2*(length + breadth);
    }

};  //here the semicolon is mandatory

int main(){
    rectangle r1,r2; // creating objects of class rectangle
    r1.length=10;r1.breadth=5; //accesing and modifying the attributes of class ractangle
    cout<<r1.area()<<endl;  
    return 0;
}
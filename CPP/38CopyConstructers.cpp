#include<iostream>
using namespace std;
class rectangle{
    int length;int breadth;
    public:
    void setLength(int l){
        if(l>0){length = l;}else{cout<<"enter positive length value ";cin>>length;}
    }
    void setBreadth(int b){
        if(b>0){breadth = b;}else{cout<<"enter positive breadth value ";cin>>breadth;}
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return getLength()*getBreadth();
    }
    //constructer
    rectangle(int l=0,int b=0){       //here we are designed a parameterized constructor with default arguments aszero
        setLength(l);setBreadth(b);   //thus it acts as both parameterized and non parameterized
    }
    //copy constructor
    rectangle(rectangle &r){
        this->length=r.length;
        breadth=r.breadth;
    }

}; //semicolon is must after the end of class

int main(){
    int l,b;
    cout<<"enter length "<<endl;
    cin>>l;
    cout<<"enter breadth "<<endl;
    cin>>b;
    rectangle r(l,b);
    rectangle r2(r);
    cout<<r2.area();
    

    return 0;
}
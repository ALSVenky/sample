#include<iostream>
using namespace std;

class rectangle{
    private: //by default these are private only
    int length ;
    int breadth ;
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
};

// set functions/methods are called mutators and get functions/methods are called accessors
// together these accessors and mutators are called property functions.

int main(){
    rectangle r;
    int l,b;
    //r.length=10; // u cant access the data of object if they are private
    cout<<"enter length "<<endl;
    cin>>l;
    cout<<"enter breadth "<<endl;
    cin>>b;

    r.setBreadth(b);r.setLength(l);
    cout<<r.area()<<endl;

    return 0;
}
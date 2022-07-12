//aquiring the features of an existing class to a new class is called inheritance

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
class cuboid : public rectangle{
    public:
    int height;
    void setHeight(int h){
        if(h>0){height =h;}else{cout<<"enter positive height value ";cin>>height;}
    }
    int getHeight(){
        return height;
    }
    int volume(){
        return getHeight()*getLength()*getBreadth();
    }
    cuboid (int l=0,int b=0,int h=0){
        setBreadth(b);setLength(l);setHeight(h);
    }

};

int main(){
    int l,b,h;
    cout<<"enter length "<<endl;
    cin>>l;
    cout<<"enter breadth "<<endl;
    cin>>b;
    cout<<"enter height "<<endl;
    cin>>h;
    cuboid c(l,b,h);
    cout<<c.volume()<<endl;

    return 0;
}
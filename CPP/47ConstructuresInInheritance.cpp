#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"default of base"<<endl;
    }
    base (int x){
        cout <<"parameterized of base "<<x<<endl;
    }
};
class derived : public base{
    public:
    derived(){
        cout<<"default of derived"<<endl;
    }
    derived(int x){
        cout <<"parameterized of derived "<<x<<endl;
    }
    derived(int x,int y):base(x){
        cout <<"parametired of derived and base"<<endl;
    }
};
int main(){
    derived d;
    derived d1(2);
    derived d3(4,3);
    return 0;
}
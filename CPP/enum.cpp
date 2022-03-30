#include <iostream>
using namespace std;
int main(){
    enum day{mon,tue,wed,thu,fri,sat,sun};
    day d;
    d=mon;
    cout <<wed<<endl; //enum members starts from zero
    cout<<d<<endl;
    d=sat;
    cout<<d<<endl;
    enum names{jan,feb=3,mar,apr,may=1,jun,jul};
    names n;
    cout<<jan<<endl<<feb<<endl<<may<<endl<<jul<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class outer{
    public:
    void fun(){
        i.display();
    }
    class inner{
        public:
        void display(){
            cout<<"Display of inner class...blaa.."<<endl;
        }
    };
    inner i;//we can create an object of inner class inside the outer class
};
int main(){
    outer o;
    o.fun();
    outer::inner i1; //we can access the inner in main function if the inner class is kept in public
    i1.display();
    return 0;
}
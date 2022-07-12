#include <iostream>
using namespace std;

class audi{
    public:
    static int price;
    // static void carPrice(){
    //     cout<<"audi price is $"<<price<<"M"<<endl;
    // }
    static int carPrice(){
        //cout<<"audi price is $";
        return price;

    }
};
int audi::price=200000;
int main (){
    audi a1,a2;
    cout<<a1.price<<endl;
    cout<<a2.price<<endl;
    cout << audi::price<<endl;
    return 0;
}
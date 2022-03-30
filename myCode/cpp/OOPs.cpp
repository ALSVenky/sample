#include<iostream>
#include<string>
using namespace std;
class human{
    public:
    string name;
    int age;
    char gender;
    void status(){
        cout <<"Unmarried";
    };
    void language();
    int expenditure(int maxExp);


};
void human::language(){
    cout << "Telugu";

};
int human::expenditure(){
    return "his max expenditure is "
}
int main(){
    human als;
    als.name="venky";
    als.age=19;
    als.gender='M';
    cout << als.name << "\n" << als.age;


    return 0;

 }
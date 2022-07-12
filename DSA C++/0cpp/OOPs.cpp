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
int human::expenditure(int max){
    cout<<"his max expenditure is ";
    return max;
}
int main(){
    human als;
    als.name="venky";
    als.age=19;
    als.gender='M';
    cout << als.name << "\n" << als.age<<endl;
    cout<<als.expenditure(2500)<<endl;
    als.language();

    return 0;

 }
#include<iostream>
#include<cstring>
using namespace std;
class student{
    public:
    int roll;
    static int admNo;
    string name;
    student(string n){
        admNo++;
        roll = admNo;
        name=n;
    }
    void display(){
        cout<<"name: " <<name<<endl<<"Roll No: "<<roll<<endl;
    }
};
int student::admNo=0;
int main(){
    student s1("als"),s2("bin"),s3("key");
    s1.display();
    s3.display();
    return 0;
}

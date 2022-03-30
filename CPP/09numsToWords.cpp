#include <iostream>
using namespace std;
int main(){
    int num,rev=0,duplicate,digit;
    cout<<"enter the number ";
    cin>>num;
    duplicate=num;
    while(duplicate>0){
        digit=duplicate%10;
        duplicate=duplicate/10;
        rev=rev*10+digit;
    }
    while(rev>0){
        digit=rev%10;
        rev=rev/10;
    if(digit==1)
        cout<<"one ";
    else if(digit==2)
        cout<<"two ";
    else if(digit==3)
        cout<<"three ";
    else if(digit==4)
        cout<<"four ";
    else if(digit==5)
        cout<<"five ";
    else if(digit==6)
        cout<<"six ";
    else if(digit==7)
        cout<<"seven ";
    else if(digit==8)
        cout<<"eight ";
    else if(digit==9)
        cout<<"nine ";
    else if(digit==0)
        cout<<"zero ";
    }
    

    
    return 0;
}

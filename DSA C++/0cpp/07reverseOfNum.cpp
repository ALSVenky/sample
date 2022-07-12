#include <iostream>
#include<cmath>
using namespace std;
int main(){
    // int num,digit,duplicate,rev=0,count=0;
    // cout << "enter number ";
    // cin>>num;
    // duplicate = num;
    // while(duplicate>0){
    //     duplicate=duplicate/10;
    //     count++;
    // }
    // // cout<<count;
    // while(count>0){
    //     digit=num%10;
    //     // cout<<digit<<endl;
    //     rev=rev+digit*(pow(10,(count-1)));
    //     // cout<<rev<<endl;
    //     num=num/10;
    //     // cout<<num<<endl;
    //     count--;
    //     // cout<<count<<endl;
        
    // }
    int rev=0;
    int num;
    cout<<"enter the number to be reversed ";
    cin>>num;
    int digit;   
    while(num>0)
    {
        digit=num%10;
        num=num/10;
        rev=rev*10+digit;
    }
    cout<<rev;    
    return 0;
}



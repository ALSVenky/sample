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
    int n;
    cin>>n;
    int m=n;
    int r;   
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev;    
    return 0;
}



#include<iostream>
using namespace std;
int Min (int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}
int Min (int x,int y, int z){
    if(x<y && x<z){
        return x;
    }else if(y<z){
        return y;
    }else{  
        return z;
    }
}
float Min(float x,float y){
    // float Min(int x,int y){  //cannot overload functions distinguished by return type alone
    if(x<y){
        return x;
    }else{
        return y;
    }
}
//we can use the same name for many functions of different argument list but for the same argumet list we have to consider the return type of func

void Main()
{
    cout<<Min(10,5);
    cout<<Min(12,7,9);
    cout<<Min(18.0f,9.0f);
}

#include<iostream>
using namespace std;
template<class T> //using this class makes us to using the below function for any function call irrespective of the return type of that function

T Max(T x, T y){  //datatype as parameters
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
    return 0;
}

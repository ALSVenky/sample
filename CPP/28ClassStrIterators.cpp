#include <iostream>
#include<string>
using namespace std;
int main(){
    string str="today";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){  //we can use for loop instead
        *it=*it-32; //we can modify aswell as we can read values
        cout<<*it;
    }
    cout<<endl;
    string::reverse_iterator rit;
    for(rit=str.rbegin();rit!=str.rend();rit++){
        cout<<*rit;
    }

return 0;
}

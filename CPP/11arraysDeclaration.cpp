#include <iostream>
using namespace std;
int main(){
                //we r using for each loop.if u wanna use for loop,u need to know the size of array.
   int arr0[5]={};
   for(int x:arr0) //here the x just takes the copy of array elements.if u wanna change the array element use &x.
   cout<<++x;  //11111
   cout<<endl;
//    now lets see whether the actual array elements are changed or not.
   for (int x:arr0)
   cout<<x; //00000
   cout<<endl;
   //you can see that the actual elements didnt changed.
//-------------
   for(int &x:arr0)
   cout<<++x;  //11111
   cout<<endl;
//now lets see whether the actual array elements are changed or not.
   for (int x:arr0)
   cout<<x;
   cout<<endl;
   //you can see that the actual elements changed because we used &x in for each loop.
   
//--------------   
   int arr4[5]={0};
   for(auto x:arr4)  //use auto keyword if u dont know the type of array.
   cout<<x;  //00000
   cout<<endl;
//---------
   int arr[]={1,2,3,4};
   for(int x:arr)
   cout<<x;  //1234
   cout<<endl;
//---------------
   int arr1[4]={1,2,3};//remaining array elements will be automatically initialized to 0.
   for(int x:arr1)
   cout<<x;  //1230
   cout<<endl;
//-----------------
   int arr2[4]={1,2,3,4};
   for(int x:arr2)
   cout<<x;  //1234
   cout<<" ";
   for (int i=0;i<4;i++){   //use for loop.
       cout<<arr2[i];
   }
    return 0;
}

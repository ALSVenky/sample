
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,3,5,7,8};
    int find=5;
    bool res=binary_search(a.begin(),a.end(),find);
    // both lower and upper bound works with time complexity of LogN.
    
    // lower_bound returns an iterator pointing to the first element in the range [first,last) 
    // which has a value not less than ‘val’. 
    int indexL=lower_bound(a.begin(),a.end(),4)-a.begin();//if element not found, then it will return index of next greater element
    
    // upper_bound returns an iterator pointing to the first element in the range [first,last)
    //  which has a value greater than ‘val’. 
    int index=upper_bound(a.begin(),a.end(),find)-a.begin();// it always return index of next greater element
    cout<<indexL<<endl;
    cout<<res;

// code for finding the first occurence of element x in the given array.
int x;
if(index != a.end()-a.begin() && a[index] == x) cout << index; //since there is chance of getting index as size+1, we need to take care of this edge case
else cout << -1;

// code to find the last occurence of the element 
int index = upper_bound (a.begin(), a.end(), x) - a.begin();
index-1;
if(index >= 0 && a [index] == x) cout << index;  //since there is chance of getting index as -1 we need to take care of edge case
else cout << -1;

        return 0;
}
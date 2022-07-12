#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={55,59,63,99,97,94,84,81,79,66,40,38,33,23,22,21,17,9,7};
    // int mid,min=0,max=nums.size()-1;
    // mid=(min+max)/2;
    // while(min<=max){
    //     if()
    // }
    bool found=false;
    int max=nums.size()-1;
    int mid=max/2;
    while(found==false){
        if(nums[mid]<nums[mid+1] && nums[mid]>nums[mid-1]){
            mid=(mid+max)/2;
        }else if(nums[mid]>nums[mid+1] && nums[mid]<nums[mid-1]){
            mid=mid/2;
        }else{
            found=true;
            cout<< mid;
        }
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int repeateElement(vector<int>&nums){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e) return s;
        if(!mid&1){
            if(nums[mid]==nums[mid+1]) s=mid+2;
            else e=mid;
        }else{
            if(nums[mid]==nums[mid-1]) s=mid+1;
            else e=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={10,10,2,2,5,5,5,5,20,20,11,11,20,10,10};
    cout<<"result : "<<repeateElement(nums);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool isArraySorted(vector<int>&nums,int i){
    if(i>=nums.size()) return true;
    if(nums[i]<nums[i-1]) return false;
    return isArraySorted(nums,i+1);
}
int main(){
    vector<int>nums={10,20,30,40,50,60,70,80};
    if(isArraySorted(nums,1)) cout<<"Array Sorted";
    else cout<<"Array isn't Sorted";
}
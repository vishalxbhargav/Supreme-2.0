#include<iostream>
#include<vector>
using namespace std;
int findPeakElement(vector<int>&nums){
    int s=0,e=nums.size()-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]<nums[mid+1]) s=mid+1;
        else if(nums[mid]>nums[mid+1]) e=mid;
    }
    return s;
}
int main(){
    vector<int>nums={1,2,1,3,5,6,4};
    cout<<"Peak element in Array : "<<findPeakElement(nums);
    return 0;
}
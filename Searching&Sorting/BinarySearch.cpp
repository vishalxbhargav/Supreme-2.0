#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& nums,int target){
    int s=0,e=nums.size()-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) s=mid+1;
        else e=mid-1;
    }
    return -1;
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,12,28,49};
    cout<<" Search Element for 9 :\n index : "<<binarySearch(nums,9);
}
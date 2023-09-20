#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>&nums){
    int s=0,e=nums.size()-1;
    int ans=0;
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid-1]>0&&nums[mid-1]>nums[mid])return mid-1;
        else if(nums[mid]>0&&nums[mid]>nums[mid+1]) return mid;
        else if(nums[s]>nums[mid]) e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int binarySearch(vector<int>&nums,int s,int e,int target){
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) s=mid+1;
        else e=mid-1;
    }
    return -1;
}
int rotatedArray(vector<int>& nums,int target) {
    //    int idx=pivotIndex(nums);
    //    int ans=0;
    //    if(target>=nums[idx]&&target<=nums[0]){
    //         ans=binarySearch(nums,0,idx,target);
    //    }else{
    //         ans=binarySearch(nums,idx+1,nums.size()-1,target);
    //    }
    //    return -1;

    int l = 0, r = nums.size()-1, mid;

        while (l <= r) {
            mid = l + (r-l)/2;
            if (target == nums[mid]) return mid;

            if (nums[mid] >= nums[l]) {
                if (target > nums[mid] || target < nums[l]) l = mid+1;
                else r = mid-1;
            } else {
                if (target < nums[mid] || target > nums[r]) r = mid-1; 
                else l = mid+1;
            }
        }

        return -1;
    }
int main(){
    vector<int> nums={4,5,6,7,0,1,2};
    cout<<"result : "<<rotatedArray(nums,0);
    
}
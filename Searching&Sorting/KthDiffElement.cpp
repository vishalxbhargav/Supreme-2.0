#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>&nums,int s,int target){
    int e=nums.size();
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int kthDiffPair(vector<int>nums,int target){
    set<pair<int,int>>ans;
    int i=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(bs(nums,i+1,nums[i]+target)!=-1){
            ans.insert({nums[i],nums[i]+target});
        }
    }
    return ans.size();
}
int main(){
    vector<int>nums={1,2,3,4,5};
    cout<<kthDiffPair(nums,5);
}
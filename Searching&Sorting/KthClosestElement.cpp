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
vector<int> kthClosestEle(vector<int>nums,int x,int k){
    int h=bs(nums,0,x);
    int l=h;
    while(k--){
        if(l<0){
            h++;
        }else if(nums[l]<nums[h]){
            l++;
        }else h++;
    }
    return vector<int>(nums.begin()+l,nums.end()+h+1);
    }
int main(){
    vector<int>nums={1,2,3,4,5};
    for(auto x:kthClosestEle(nums,3,2)) cout<<" "<<x;
}
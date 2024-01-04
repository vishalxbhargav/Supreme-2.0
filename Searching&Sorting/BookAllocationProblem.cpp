#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>nums){
    int s=0;
    for(auto x:nums) s+=x;
    return s;
}
int isPossibleSol(vector<int>nums,int M,int sol){
    int pageSum=0;
    int c=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>sol) return false;
        if(pageSum+nums[i]>sol){
            c++;
            pageSum=nums[i];
            if(c>M) return false;
        }else{
            pageSum+=nums[i];
        }
    }
    return true;
}
int findPages(vector<int>nums,int M){
    int s=0,e=sum(nums);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossibleSol(nums,M,mid)){
            ans=mid;
            e=mid-1;
        }else s=mid+1;
    }
    return ans;
}
int main(){
    vector<int>nums={12,36,67,90};
    cout<<"result : "<<findPages(nums,2);
    return 0;
}
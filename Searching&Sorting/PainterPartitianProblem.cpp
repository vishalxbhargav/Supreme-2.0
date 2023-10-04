#include<bits/stdc++.h>
using namespace std;
bool isPossibleSolution(vector<int>nums,int k,long long sol){
    long long timeSum=0;
    int c=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>sol) return false;
        if(timeSum+nums[i]>sol){
            c++;
            timeSum=nums[i];
            if(c>k)return false;
        }else timeSum+=nums[i];
    }
    return true;
}
long long minTime(vector<int>nums,int k){
    long long s=0;
    long long e;
    long long ans=-1;
    for(int i=0;i<nums.size();i++) e+=nums[i];

    while(s<=e){
        long long mid=s+(e-s)/2;
        if(isPossibleSolution(nums,k,mid)){
            ans=mid;
            e=mid-1;
        }else s=mid+1;
    }
    return ans;
}
int main(){
    vector<int>nums={12,36,67,90};
    cout<<"result : "<<minTime(nums,2);
    return 0;
}
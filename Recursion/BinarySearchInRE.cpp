#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>&nums,int s,int e,int target){
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target) return bs(nums,mid+1,e,target);
    return bs(nums,s,mid-1,target);
   
}
int main(){
    vector<int>nums={10,20,30,40,50,60,70,80};
    int s=0,e=7,target=80;
    cout<<"Search 40 in index of "<<bs(nums,s,e,target);
}
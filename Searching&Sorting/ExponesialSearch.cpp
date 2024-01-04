#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>&nums,int s,int e,int t){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==t) return mid;
        else if(nums[mid]>t) e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int exponesialSearch(vector<int>&nums,int t){
    int i=nums[0],n=nums.size()-1;
    while(nums[i]<t){
        if(nums[i]==t) return i;
        i*=2;
    }
    n=min(i,n);cout<<" i : "<<n<<endl;
    return bs(nums,i/2,n,t);
}
int main(){
    vector<int>nums={1,4,5,6,7,10,12,34,49,50,60,69,72,91};
    cout<<"result : "<<exponesialSearch(nums,50);
}
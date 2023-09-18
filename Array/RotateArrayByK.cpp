#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& nums,int s,int e) {
    while(s<e){
        int tem=nums[s];
        nums[s]=nums[e];
        nums[e]=tem;
        s++;e--;
    }     
}
void rotateArray(vector<int>& nums,int k) {
    reverse(nums,0,nums.size()-1);
    reverse(nums,0,nums.size()-k-1);
    reverse(nums,nums.size()-k,nums.size()-1);
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7,8};
    rotateArray(nums,4);
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
}
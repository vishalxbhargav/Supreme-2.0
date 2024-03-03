#include<iostream>
#include<vector>
using namespace std;
int buyAndSell(vector<int>nums){
    int min=__INT32_MAX__,ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<min) min=nums[i];
        ans=max(ans,nums[i]-min);
    }
    return ans;
}
int buyAndSellRE(vector<int>nums,int min,int& ans,int i){
    if(i>=nums.size()) return ans;
    if(nums[i]<min) min=nums[i];
    ans=max(ans,nums[i]-min);
    return buyAndSellRE(nums,min,ans,i+1);
}
int main(){
    vector<int>nums={7,1,5,3,6,4};
    int ans=0;
    cout<<buyAndSellRE(nums,__INT32_MAX__,ans,0);
    return 0;
}
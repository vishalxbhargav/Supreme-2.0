#include<iostream>
#include<vector>
using namespace std;
int usingSpaceOptimization(vector<int>&nums){
	int prev2=nums[0];
	int prev1=max(prev2,nums[1]);
	for(int i=2;i<=nums.size();i++){
		int curr=max(prev1,nums[i]+prev2);
		prev2=prev1;
		prev1=curr;
	}
	return prev1;
}
int usingTabulation(vector<int>&nums){
	vector<int>dp(nums.size()+1);
	dp[0]=nums[0];
	dp[1]=max(nums[1],dp[0]);
	for(int i=2;i<=nums.size();i++){
		dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
	}
	return dp[nums.size()];


}
int usingMemo(vector<int>&nums,int i,vector<int>&dp){
	if(i>=nums.size()) return 0;
    if(dp[i]!=-1) return dp[i];
	return dp[i]=max(usingMemo(nums,i+1,dp),nums[i]*i+usingMemo(nums,i+2,dp)); 
}
int usingRec(vector<int>&nums,int i){
	if(i>=nums.size()) return 0;
	return max(usingRec(nums,i+1),nums[i]+usingRec(nums,i+2)); 
}
int deleteAndEarn(vector<int>&nums){
	int el=0;
	for(int x:nums) el=max(el,x);
	vector<int>arr(el+1);
	for(int n:nums) arr[n]+=n;
	// return usingRec(arr,1);
	// return usingTabulation(arr);
	return usingSpaceOptimization(arr);
}
int main(){
	vector<int>nums={3,4,2};
	cout<<"Ans : "<<deleteAndEarn(nums);
	return 0;
}
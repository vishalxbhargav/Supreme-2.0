#include <iostream>
#include<vector>
using namespace std;
// int tabulation(int n){
// 	vector<int>dp(n+1);
// 	if(n==1||n==2) return n;
// 	dp[0]=0;
// 	dp[1]=1;
// 	dp[2]=2;
// 	for(int i=3;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
// 	return dp[n];
// }
// int spaceOptimization(int n){
// 	if(n==1||n==2) return n;

// 	int prev1=1,prev2=2;
// 	for(int i=3;i<=n;i++){
// 		int curr=prev1+prev2;
// 		prev2=prev1;
// 		prev1=curr;
// 	} 
// 	return prev1;
// }
int usingMemo(vector<int>&nums,int i,vector<int>&dp){
	if(i>=nums.size()) return 0;
	if(dp[i]!=-1) return dp[i];
	return dp[i]=nums[i]+min(usingMemo(nums,i+1,dp),usingMemo(nums,i+2,dp));
}
int usingRec(vector<int>&nums,int i){
	if(i>=nums.size()) return 0;
	return nums[i]+min(usingRec(nums,i+1),usingRec(nums,i+2));
}
int climbingStair(vector<int>&nums){
	
	// return usingRec(nums,0);
	vector<int>dp(nums.size()+1,-1);
	return usingMemo(nums,0,dp);
}
int main(){
	std::vector<int> nums={1,100,1,1,1,100,1,1,100,1};
	cout<<"ans : "<<climbingStair(nums);
}
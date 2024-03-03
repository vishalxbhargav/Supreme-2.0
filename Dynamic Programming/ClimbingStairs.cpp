#include <iostream>
#include<vector>
using namespace std;
int tabulation(int n){
	vector<int>dp(n+1);
	if(n==1||n==2) return n;
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
	return dp[n];
}
int spaceOptimization(int n){
	if(n==1||n==2) return n;

	int prev1=1,prev2=2;
	for(int i=3;i<=n;i++){
		int curr=prev1+prev2;
		prev2=prev1;
		prev1=curr;
	} 
	return prev1;
}
int memoization(int n,vector<int>&dp){
	if(n==1||n==2) return n;
	if(dp[n]!=-1) return dp[n];
	return dp[n]=memoization(n-1,dp)+memoization(n-2,dp);
}
int climbingStair(int n){
	// vector<int> dp(n+1,-1);
	// return memoization(n,dp);
	return spaceOptimization(n);
}
int main(){
	int n=5;
	cout<<"ans : "<<climbingStair(n);
}
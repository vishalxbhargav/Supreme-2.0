#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
int usingRec(vector<int>& num,int n){
	if(n==0) return 0;
	if(n<0) return INT_MAX;
	int ans= INT_MAX;

	for(int i=0;i<num.size();i++){
		if(n-num[i]<=n){
			int rec=usingRec(num,n-num[i]);
			if(rec!=INT_MAX) ans=min(ans,rec+1);
		}
	}
	return ans;
}
int usingMemo(vector<int>&num,int n,vector<int>& dp){
	if(n==0) return 0;
	if(n<0) return INT_MAX;
	int ans= INT_MAX;
	if(dp[n]!=-1) return dp[n];
	for(int i=0;i<num.size();i++){
		if(num[i]<=n){
			int rec=usingMemo(num,n-num[i],dp);
			if(rec!=INT_MAX) ans=min(ans,rec+1);
		}
	}
	return dp[n]=ans;
}
int usingTabulation(vector<int>&num,int n){
	vector<int>dp(n+1,INT_MAX);
	dp[0]=0;
	for(int i=1;i<=n;i++){

		for(int j=0;j<num.size();i++){

			if(i>=num[j]&&dp[i-num[j]]!=INT_MAX){
				
				dp[i]=min(dp[i],1+dp[i-num[j]]);
			}
		}
	}
	return dp[n];
}
int coinChange(vector<int>& num,int n){
	// return usingRec(num,n);
	// vector<int>dp(n+1,-1);
	return usingTabulation(num,n);

}
int main(){
	vector<int> num={1,2,5};
	int n=11;
	cout<<"ans : "<<coinChange(num,n);
	return 0;
}
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int usingRec(int n,int x,int y,int z){
	if(n==0) return 0;
	if(n<0) return INT_MIN;
	int xvl=usingRec(n-x,x,y,z);
	int yvl=usingRec(n-y,x,y,z);
	int zvl=usingRec(n-z,x,y,z);
	return 1+max(xvl,max(yvl,zvl));
}
int usingMemo(int n,int x,int y,int z,vector<int>&dp){
	if(n==0) return 0;
	if(n<0) return INT_MIN;
	if(dp[n]!=-1) return dp[n];
	int xvl=usingMemo(n-x,x,y,z,dp);
	int yvl=usingMemo(n-y,x,y,z,dp);
	int zvl=usingMemo(n-z,x,y,z,dp);
	return dp[n]=1+max(xvl,max(yvl,zvl));
}
int usingTabulation(int n,int x,int y,int z){
	vector<int>dp(n+1,-1);
	dp[0]=0;
	for(int i=0;i<=n;i++){
		if(i-x>=0 && dp[i-x]!=-1) dp[i]=max(dp[i],dp[i-x]+1);
		if(i-y>=0 && dp[i-y]!=-1) dp[i]=max(dp[i],dp[i-y]+1);
		if(i-z>=0 && dp[i-z]!=-1) dp[i]=max(dp[i],dp[i-z]+1);
	}
	return dp[n];
}
int usingSpaceOptimization(int n,int x,int y){
	int ans=0,xans=0,yans=0,zans=0;
	return 0;

}
int cutRodd(int n,int x,int y,int z){
	
	// return usingRec(n,x,y,z);
	// vector<int>dp(n+1,-1);
	// return usingMemo(n,x,y,z,dp);

	return usingTabulation(n,x,y,z);
}
int main(){
	int n=11;
	int x=2;
	int y=5;
	int z=3;
	cout<<"Ans : "<<cutRodd(n,x,y,z);
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int usingRec(int n){
	if(n==1||n==2) return n-1;
	return (n-1)*(usingRec(n-1)+usingRec(n-2));
}
int usingMemo(int n,vector<int>&dp){
	if(n==1||n==2) return n-1;
	if(dp[n]!=-1) return dp[n];
	return dp[n]=(n-1)*(usingMemo(n-1,dp)+usingMemo(n-2,dp));
}
int countDearang(int n){
	// return usingRec(n);
	vector<int> dp(n+1,-1);
	return usingMemo(n,dp);
}
int main(){
	int n=4;
	cout<<"Ans : "<<countDearang(n);
	return 0;
}
#include<iostream>
#include <vector>
using namespace std;
int usingTabulatino(vector<int>&arr,int tar){
	vector<int>dp(tar+1,0);
	dp[0]=1;
	for(int target=1;target<=tar;target++){
		for(int i=0;i<arr.size();i++){
			if(target-arr[i]>=0){
				dp[target]+=dp[target-arr[i]];
			}
		}
	}
	return dp[tar];
}
int usingMemo(vector<int>&arr,int tar,vector<int>&dp){
	if(tar==0) return 1;
	if(tar<0) return 0;
	if(dp[tar]!=-1) return dp[tar];
	int ans=0;
	for(int i=0;i<arr.size();i++){
		if(tar>=arr[i]){
			ans+=usingMemo(arr,tar-arr[i],dp);
		}
	}
	return dp[tar]=ans;

}
int usingRec(vector<int>arr,int tar){
	if(tar==0) return 1;
	if(tar<0) return 0;
	int ans=0;
	for(int i=0;i<arr.size();i++){
		if(tar>=arr[i]){
			ans+=usingRec(arr,tar-arr[i]);
		}
	}
	return ans;
}
int combinationSum(vector<int>arr,int tar){
	// return usingRec(arr,tar);
	// vector<int>dp(tar+1,-1);
	// return usingMemo(arr,tar,dp);
	return usingTabulatino(arr,tar);
}
int main(){
	vector<int>arr={1,2,5};
	int tar=5;
	cout<<"Ans : "<<combinationSum(arr,tar);
	return 0;
}
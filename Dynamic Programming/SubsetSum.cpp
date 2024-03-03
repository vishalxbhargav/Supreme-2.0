#include<iostream>
#include<vector>
using namespace std;
//using memoizaton
bool solve(vector<int>& arr,int W,int  n,vector<vector<int>>& dp){
    if(W<0||n<0) return 0;
    if(W==0) return 1;
    if(dp[n][W]!=-1) return dp[n][W];
    if(W-arr[n-1]>=0) return dp[n][W]=solve(arr,W-arr[n-1],n-1,dp)||solve(arr,W,n-1,dp);
    else return dp[n][W]=solve(arr,W,n-1,dp);
}
bool subsetSumMemo(vector<int>& arr,int W,int  n){
   vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
   for(int i=0;i<=n;i++){
    for(int j=0;j<=W;j++){
        if(j==0) dp[i][j]=0;
        if(i==0) dp[i][j]=1;
    }
   }
   return solve(arr,W,n,dp);
}
bool subsetSum(vector<int>& arr,int W,int  n){
    if(W<0||n<0) return false;
    if(W==0) return true;
    if(W-arr[n-1]>=0) return subsetSum(arr,W-arr[n-1],n-1)||subsetSum(arr,W,n-1);
    else return subsetSum(arr,W,n-1);
}
int main(){
    vector<int> arr={2,3,7,8,10};
    int sum=6;
    if(subsetSum(arr,sum,5)) cout<<"Subset Present";
    else cout<<"Subset isn't Present";
    return 0;
}
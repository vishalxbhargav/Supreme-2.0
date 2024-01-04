#include<iostream>
#include<vector>
using namespace std;
//in this question you can simple use loop or recursion but i am using dynamic Programming
int solve(int n,vector<int>&dp){
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=n*solve(n-1,dp);
}
int factorial(int n){
    vector<int>dp(n+1,-1);
    return solve(n,dp);
}
int main(){
    cout<<"factorial of "<<8<<factorial(18);
}
#include<iostream>
#include<vector>
using namespace std;
int usingMemo(int n,vector<int>& dp){
    if(n==0||n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=usingMemo(n-1,dp)+usingMemo(n-2,dp );
}
int usingRec(int n){
    if(n==0||n==1) return n;
    return usingRec(n-1)+usingRec(n-2);
}
int usingTabulation(int n,vector<int>& dp){
    if(n==0||n==1) return n;
    dp[0]=0;dp[1]=1;
    for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
    
    return dp[n];
}
int fibbo(int n){
    // //using simple recursion
    // return usingRec(n);

    // // using Memoisation dp Method(top-down)
    vector<int> dp(n+1,-1);
    // return usingMemo(n,dp);

    // ussing Tabulation dp Method(bottom-up)
    return usingTabulation(n,dp);
}
int main(){
    cout<<"Fibonacci for 6 : "<<fibbo(6);
    return 0;
}
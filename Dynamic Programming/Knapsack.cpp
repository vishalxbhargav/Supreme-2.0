#include<iostream>
#include<vector>
using namespace std;
int knapspack(vector<int>wt,vector<int>val,int w,int n){
    if(n==0||w<=0) return 0;
    if(wt[n-1]<=w){
        return max(val[n-1]+knapspack(wt,val,w-wt[n-1],n-1),knapspack(wt,val,w,n-1));
    }else return knapspack(wt,val,w,n-1);
}
//using memoization dp mehtode
int solve(vector<int>wt,vector<int>val,int w,int n,vector<vector<int>>dp){
    if(n==0||w<=0) return 0;
    if(dp[n][w]!=-1) return dp[n][w];
    if(wt[n-1]<=w){
        return dp[n][w]= max(val[n-1]+knapspack(wt,val,w-wt[n-1],n-1),knapspack(wt,val,w,n-1));
    }else return dp[n][w]=knapspack(wt,val,w,n-1);
}
int knapspackMemo(vector<int>wt,vector<int>val,int w,int n){
    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
   return solve(wt,val,w,n,dp);
}
//using memoization dp mehtode
int knapspackTabulation(vector<int>wt,vector<int>val,int W,int n){
     int i, w; 
    vector<vector<int> > K(n + 1, vector<int>(W + 1)); 
  
    // Build table K[][] in bottom up manner 
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                K[i][w] = max(val[i - 1] 
                                  + K[i - 1][w - wt[i - 1]], 
                              K[i - 1][w]); 
            else
                K[i][w] = K[i - 1][w]; 
        } 
    } 
    return K[n][W]; 
}
int main(){
    vector<int> wt={10, 20, 30};
    vector<int> val={60, 100, 120};
    cout<<"Result : "<<knapspackTabulation(wt,val,50,3);
    return 0;
}
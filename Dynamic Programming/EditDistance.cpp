#include<iostream>
#include<vector>
using namespace std;
int solve(string& w1,int i,string& w2,int j,vector<vector<int>>&dp){
    //base case
    if(i>=w1.size()&&j>=w2.size()) return 0;
    if(i==w1.size()) return w2.size()-j;
    if(j==w2.size()) return w1.size()-i;

    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(w1[i]==w2[j]) ans=0+solve(w1,i+1,w2,j+1,dp);
    else{
        int inset=solve(w1,i+1,w2,j,dp);
        int remove=solve(w1,i,w2,j+1,dp);
        int replace=solve(w1,i+1,w2,j+1,dp);
        ans=min(inset,min(remove,replace))+1;
    }
    return dp[i][j]=ans;
}
int usingTabulation(string& w1,string& w2){
    vector<vector<int>>dp(w1.size(),vector<int>(w2.size(),-1));
}
int editDistance(string& w1,string& w2){
    int i=0;
    int j=0;
    vector<vector<int>>dp(w1.size(),vector<int>(w2.size(),-1));
    return solve(w1,i,w2,j,dp);
}
int main(){
    string w1="horse";
    string w2="ors";
    cout<<"Ans : "<<editDistance(w1,w2);
    return 0;
}
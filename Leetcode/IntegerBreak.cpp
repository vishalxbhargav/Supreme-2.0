#include<bits/stdc++.h>
using namespace std;
// int  solve(vector<int>v,vector<int>ans,int target){
//     if(target==0) return 0;
//     if(target<0) return -1;
//     int result=solve()
//     return ans;
// }
// int integerBreak(int n){
//     int result=0;
//     vector<int>v;
//     vector<int>ans;
//     for(int i=1;i<n;i++) v.push_back(i);
//     for(auto i:solve(v,ans,n)) result*=i;
//     return result;
    
// }

int integerBreak(int n){
    if(n<4) return n-1;
    int result=1;
    while(n>4){
        result*=3;
        n-=3;
    }
    return result*n;
}
int main(){
    cout<<"result : "<<integerBreak(10);
    return 0;
}
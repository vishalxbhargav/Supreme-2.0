#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int MHA(vector<int>& nums){
    stack<int>stk;
    vector<int>nsr(nums.size(),0);
    vector<int>nsl(nums.size(),nums.size());
    for(int i=0;i<nums.size();i++){
        while(!stk.empty()&&nums[stk.top()]>=nums[i]) stk.pop();
        nsr[i]=stk.empty()?-1:stk.top();
        stk.emplace(i);
    }
    while(!stk.empty()) stk.pop();

    for(int i=nums.size()-1;i>=0;i--){
        while(!stk.empty()&&nums[stk.top()]>=nums[i]) stk.pop();
         nsl[i]=stk.empty()?nums.size():stk.top();
        stk.emplace(i);
    }
    int result=-1;
    for(int i=0;i<nums.size();i++){
        int cur=(nsl[i]-nsr[i]-1)*nums[i];
        result=max(result,cur);
    }
    return result;
}
int maximalRectangle(vector<vector<int>>& arr,int n,int m){
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
        v[i]=arr[0][i];
    }
    int result=MHA(v);
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0) v[j]=0;
            else v[j]=v[j]+arr[i][j];
        }
        result=max(result,MHA(v));
    }
    return result;
}
int main(){
    vector<vector<int>> arr={{0,1,0,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    cout<<"Ans : "<<maximalRectangle(arr,4,4);
    return 0;
}
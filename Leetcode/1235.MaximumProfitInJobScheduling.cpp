/*

1235. Maximum Profit in Job Scheduling
Hard
Topics
Companies
Hint
We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].

You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

If you choose a job that ends at time X you will be able to start another job that starts at time X.

*/


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int solve(int i,vector<vector<int>>& jobs,vector<int>& startTime,vector<int>& dp){
    if(i>=startTime.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    int ind=lower_bound(startTime.begin(),startTime.end(),jobs[i][1])-startTime.begin();
    int pick=jobs[i][2]+solve(ind,jobs,startTime,dp);
    int notpick=solve(i+1,jobs,startTime,dp);
    return dp[i]=max(pick,notpick);

}
 int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>>jobs;
        vector<int> dp(profit.size()+1,-1);
        for(int i=0;i<profit.size();i++) jobs.push_back({startTime[i],endTime[i],profit[i]});
        sort(jobs.begin(),jobs.end());
        sort(startTime.begin(),startTime.end());
        return solve(0,jobs,startTime,dp);
    }
int main(){
    vector<int> startTime,endTime,profit;
    startTime={1,2,3,4,6};
    endTime={3,5,10,6,9};
    profit={20,20,100,70,60};
    int result=jobScheduling(startTime,endTime,profit);
    cout<<result;
}
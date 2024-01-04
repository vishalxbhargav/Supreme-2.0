#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>&nums){
    unordered_map<int,int> mp;
        int n = nums.size();
        for(auto i:nums){
            mp[i]++;
        }
        vector<int> ans;
        int x = floor(n/3);
        for(auto i:mp){
            if(i.second > x){
                ans.push_back(i.first);
            }
        }
        return ans;    
}
int main(){
    // vector<int>nums={1,2,1,5,2,1,2,4,2,1,2,1};
    vector<int>nums={1,2};
    vector<int>result=majorityElement(nums);
    for(auto x:result) cout<<x<<" ";
    return 0;
}
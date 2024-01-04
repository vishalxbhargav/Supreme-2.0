#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int maximumHistogram(vector<int>& nums){
    stack<int>stk;
    vector<int>nsr(nums.size(),0);
    vector<int>nsl(nums.size(),nums.size());
    for(int i=0;i<nums.size();i++){
        while(!stk.empty()&&nums[stk.top()]>=nums[i]) stk.pop();
        nsr[i]=stk.empty()?-1:stk.top();
        stk.emplace(i);
    }
    for(auto i:nsr) cout<<i<<" ";
    cout<<endl;
    while(!stk.empty()) stk.pop();

    for(int i=nums.size()-1;i>=0;i--){
        while(!stk.empty()&&nums[stk.top()]>=nums[i]) stk.pop();
         nsl[i]=stk.empty()?nums.size():stk.top();
        stk.emplace(i);
    }

    for(auto i:nsl) cout<<i<<" ";
    int result=-1;
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        int cur=(nsl[i]-nsr[i]-1)*nums[i];
        result=max(result,cur);
        cout<<cur<<" ";
    }
    return result;
}
int main(){
    vector<int>nums={2,1,5,6,2,3};
    // vector<int>nums={6,2,5,4,5,1,6};
    // int result=maximumHistogram(nums);2,1,5,6,2,3
    cout<<maximumHistogram(nums);
    return 0;
}
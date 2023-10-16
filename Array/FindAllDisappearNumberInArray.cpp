#include<bits/stdc++.h>
using namespace std;
vector<int> findAllDisappearNumber(vector<int>nums){
    for(int i=0;i<nums.size();i++){
            int x=abs(nums[i]);
            if(nums[x-1]>0) nums[x-1]*=-1;
    }
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0) ans.push_back(i+1);
    }
    for(auto i:nums)
    cout<<i<<" ";
    return ans;
}
int main(){
    vector<int>nums={4,3,2,7,8,2,3,1};
    findAllDisappearNumber(nums);
    return 0;
}
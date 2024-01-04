#include<bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        vector<int>cnt(101);
        for (int a: nums) {
            ans += cnt[a]++;
        }
        return ans;
    }
int main(){
    vector<int>nums={1,2,3,1,1,3};
    cout<<"result : "<<numIdenticalPairs(nums);
    return 0;
}
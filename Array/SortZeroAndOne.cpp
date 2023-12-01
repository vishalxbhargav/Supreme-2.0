#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>nums){
    int cnt=0;
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]+1){
            int j=i+1;
            while(j<nums.size()){
                nums[j]=nums[j+1];
                j++;
            }
            nums[i]=nums[i-1]+1;
            cnt++;
        }
    }
    return cnt;
}
int main(){
    vector<int> nums={1,2,3,5,6};
    cout<<"result : "<<solve(nums);
}
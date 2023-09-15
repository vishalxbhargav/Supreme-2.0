#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums){
    int s=0,e=nums.size()-1,ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]-mid==1){
            s=mid+1;
        }else e=mid-1;
    }
    return s+1;
}
int main(){
    vector<int> nums={1,2,3,4,6,7,8};
    cout<<" Missing Number  : "<<missingNumber(nums)<<endl;
}
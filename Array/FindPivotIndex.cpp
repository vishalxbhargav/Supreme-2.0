#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
       int sum=0;
       for(int i=0;i<nums.size();i++) sum+=nums[i];
       int lsum=0,rsum=sum;
       for(int i=0;i<nums.size();i++){
            lsum+=nums[i];
            if(lsum==rsum) return i;
            rsum-=nums[i];
       }
       return -1;
    }
int main(){
    vector<int> nums={1,3,4,2,1,10};
    cout<<"Duplicate Element : "<<findDuplicate(nums);

}
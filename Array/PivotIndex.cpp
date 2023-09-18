#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        int lsum=0,rsum=sum;
        for(int i=0;i<nums.size();i++){
            rsum-=nums[i];
            if(lsum==rsum) return i;
            lsum+=nums[i];
        }
        return -1;
    }
int main(){
    vector<int> nums={1,7,3,6,5,6};
    cout<<"Pivot Index for Given Array is : "<<pivotIndex(nums);

}
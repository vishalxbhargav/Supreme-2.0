#include<iostream>
#include<vector>
using namespace std;
int min(vector<int>& nums) {
    int min=nums[0];
    for(int i=1;i<nums.size();i++) if(min>nums[i]) min=nums[i];
    return min;        
}
int main(){
    vector<int> nums={1,7,3,6,5,6};
    cout<<"Minimum of Array Element : "<<min(nums);

}
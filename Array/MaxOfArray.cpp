#include<iostream>
#include<vector>
using namespace std;
int max(vector<int>& nums) {
    int max=nums[0];
    for(int i=1;i<nums.size();i++) if(max<nums[i]) max=nums[i];
    return max;        
}
int main(){
    vector<int> nums={1,7,3,6,5,6};
    cout<<"Maximum of Array Element : "<<max(nums);

}
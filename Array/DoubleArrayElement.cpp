#include<iostream>
#include<vector>
using namespace std;
void doubleOfArray(vector<int>& nums) {
    for(int i=1;i<nums.size();i++) nums[i]*=2;
    return;
}
int main(){
    vector<int> nums={1,7,3,6,5,6};
    for(int i=1;i<nums.size();i++)
    cout<<" "<<nums[i];
    cout<<endl;
    doubleOfArray(nums);
    for(int i=1;i<nums.size();i++)
    cout<<" "<<nums[i];


}
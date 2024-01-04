#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>& nums) {
    int ans=0;
    for(int i=0;i<nums.size();i++)  ans^=nums[i];
    return ans;        
}
int main(){
    vector<int> nums={1,7,3,6,5,6,5,11,7,3,1};
    cout<<"Maximum of Array Element : "<<findUnique(nums);

}
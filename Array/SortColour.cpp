#include<iostream>
#include<vector>
using namespace std;
void sortColor(vector<int>& nums){
    int s=0,mid=0,e=nums.size()-1;
    while(mid<e){
        if(nums[mid]==0) swap(nums[mid++],nums[s++]);
        else if(nums[mid]==2) swap(nums[mid],nums[e--]);
        else mid++;
    }       
}
int main(){
    vector<int> nums={2,0,1,1,0,1,2,0,1,2,0,1,2,0,0,2,1};
    sortColor(nums);
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";

}
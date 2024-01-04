#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int>& nums) {
    for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
}
void reverse(vector<int>& nums) {
    int s=0,e=nums.size()-1;
    while(s<e){
        int tem=nums[s];
        nums[s]=nums[e];
        nums[e]=tem;
        s++;e--;
    }     
}
int main(){
    vector<int> nums={1,7,3,6,5,6};
    printArray(nums);
    cout<<endl;
    reverse(nums);
    printArray(nums);

}
#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int>& nums) {
    for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
}
int main(){
    vector<int> nums(5,0);
    cout<<"Enter 5 number to print in Array: ";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    printArray(nums);
    return 0;
}
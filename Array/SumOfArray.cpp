#include<iostream>
#include<vector>
using namespace std;
int sumOfArray(vector<int>& nums) {
    int sum=0;
    for(int i=1;i<nums.size();i++) sum+=nums[i];
    return sum;        
}
int main(){
    vector<int> nums={1,7,3,6,5,6};
    cout<<"Sum of Array: "<<sumOfArray(nums);

}
#include<bits/stdc++.h>
using namespace std;
int houseRobbory(vector<int>nums,int i){
    if(i>=nums.size()) return 0;
    return max(houseRobbory(nums,i+1),nums[i]+houseRobbory(nums,i+2));
}
int main(){
    vector<int>nums={1,2,3,4,5,6};
    int i=0;
    cout<<"result : "<<houseRobbory(nums,i);
    return 0;
}
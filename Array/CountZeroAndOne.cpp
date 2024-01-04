#include<iostream>
#include<vector>
using namespace std;
void countZeroAndOne(vector<int>& nums) {
    int cntZero=0;
    for(int i=1;i<nums.size();i++) if(nums[i]==0) cntZero++;
    cout<<"Zero Count : "<<cntZero<<endl;
    cout<<"One Count : "<<nums.size()-cntZero<<endl;
}
int main(){
    vector<int> nums={1,0,1,1,1,0,0,1,0,0,0,1,0};
    countZeroAndOne(nums);

}
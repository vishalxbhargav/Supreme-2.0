#include<iostream>
#include<vector>
using namespace std;
void printSubArray(vector<int> nums,int n){
   if(n<0) return;
   for(int i=0;i<n;i++) cout<<nums[i]<<" ";
   cout<<endl;
   printSubArray(nums,n-1);
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    printSubArray(nums,nums.size());
    return 0;
}
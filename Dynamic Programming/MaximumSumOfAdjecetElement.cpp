#include <iostream>
#include<vector>
using namespace std;
int usingRec(vector<int>& nums,int n){
	if(n<0) return 0;
	if(n==0) return nums[0];
	return max(usingRec(nums,n-1),nums[n]+usingRec(nums,n-2));
}
int maximumSum(vector<int>& nums,int n){
	return usingRec(nums,n);
}
int main(){

	vector<int>nums={9,8,9,2};
	int n=4;
	cout<<"ans : "<<maximumSum(nums,n);
	return 0;
}
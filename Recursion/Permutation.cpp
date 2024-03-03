#include<iostream>
#include<vector>
using namespace std;
// void permutation(vector<int>&v,int n){
// 	//base case
// 	if(n>=v.size()){
// 		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
// 		cout<<"   ";
// 	}
	// for(int i=n;i<v.size();i++){
	// 	swap(v[i],v[n]);
	// 	permutation(v,n+1);
	// 	swap(v[i],v[n]);
	// }
// }
 vector<vector<int>> usingRec(vector<int>& nums,int n, vector<vector<int>>&ans){
        if(n>=nums.size()){
            ans.push_back(nums);
            return ans;
        }
        for(int i=n;i<nums.size();i++){
			swap(nums[i],nums[n]);
			usingRec(nums,n+1,ans);
			swap(nums[i],nums[n]);
		}
        return ans;
    } 
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        return usingRec(nums,0,ans);
    }
int main(){
	vector<int > nums={1,2,3};
	vector<vector<int>>ans;
	ans=permute(nums);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++) cout<<ans[i][j]<<"  ";
		cout<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>v1,vector<int>v2){
	int n=v1.size()+v2.size();
	int *ans=new int(n);
	int i=0,j=0,k=0;
	while(v1.size()>i&&v2.size()>j){
		if(v1[i]>v2[j]){
			ans[k]=v2[j];
			k++;j++;
		}else{
			ans[k]=v1[i];
			k++;i++;
		}
	}
	while(i<v1.size())
		ans[k++]=v1[i++];
	while(j<v2.size())
		ans[k++]=v2[j++];
	for(int i=0;i<n;i++){
		cout<<ans+i<<" ";
	}
}
int main(){
	vector<int> nums={1,2,5,6,8,12,48,87,99};
	vector<int> nums1={3,4,7,10,18,20,88,91};
	merge(nums,nums1);
	return 0;
}

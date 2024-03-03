#include <iostream>
using namespace std;
int numRollToTarget(int n,int k,int target){
	//base
	if(n==0&&target==0) return 1;
	if(n==0&&target!=0||n!=0&&target==0) return 0;

	int ans=0;
	for(int i=1;i<=k;i++){
		if(target>=0) ans=ans+numRollToTarget(n-1,k,target-i);
	}
	return ans;
}
int main(){
	cout<<"Start"<<endl;
	cout<<numRollToTarget(30,30,500);
	cout<<"End"<<endl;
	return 0;
}
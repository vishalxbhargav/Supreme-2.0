#include<iostream>
#include<vector>
using namespace std;
vector<int> sequenceDigit(int low,int high){
	string s="123456789";
	vector<int>ans;
	for(int i=2;i<s.length();i++){
		for(int len=0;len<=s.length()-i;len++){
			string pos=s.substr(len,i);
			int n=stoi(pos);
			if(low<=n&&high>=n)	ans.push_back(n);
		}
		
	}
	return ans;
}
int main(){
	sequenceDigit(100,1000);
	cout<<"Ans";
	return 0;
}
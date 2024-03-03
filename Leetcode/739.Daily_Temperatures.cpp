#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void dailyTemperature(vector<int>&temp){
	stack<int>st;
	vector<int>ans(temp.size(),0);
	for(int i=temp.size()-1;i>=0;i--){
		while(!st.empty()&&temp[st.top()]<=temp[i]) st.pop();
		if(!st.empty()) ans[i]=st.top()-i;
		st.push(i);
	}
	return ans;
}
int main(){
	std::vector<int> v={73,74,75,71,69,72,76,73};
	dailyTemperature(v);
	cout<<"Ans";
	return 0;
}
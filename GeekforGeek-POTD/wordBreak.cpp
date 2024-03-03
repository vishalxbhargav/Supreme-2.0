#include<iostream>
#include<vector>
#include<set>
using namespace std;
int helper(int i,string s,set<string>&wordDict){
	if(i==s.size()) return 1;
	string temp;
	for(int j=i;j<s.size();j++){
		temp+=s[j];
		if(wordDict.find(temp)!=wordDict.end()){
			if(helper(j+1,s,wordDict)) return 1;
		}
	}
	return 0;
}
bool wordBreak(string s,vector<string>& wordDict){
	set<string>st;
	for(auto a:wordDict) st.insert(a);
	return helper(0,s,st);
}
int main(){
	vector<string> word={"i","like","sam","sung","samsung"};
	string s="ilike";
	if(wordBreak(s,word)) cout<<"the code is correct";
	else cout<<"code error";
	cout<<wordBreak(s,word);
	return 0;
}
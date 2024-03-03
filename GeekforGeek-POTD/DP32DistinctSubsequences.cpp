#include<iostream>
#include<vector>
using namespace std;
int usingRec(int i,int j,string& s,string& t){
	if(j<0) return 0;
	if(i<0) return 1;
	if(s[i]==t[j]){
		return usingRec(i-1,j-1,s,t)+usingRec(i-1,j,s,t);
	}

	return usingRec(i-1,j,s,t);
}
int subsequenceCount(string s,string t){
	int n=s.size();
	int m=t.size();
	return usingRec(n-1,m-1,s,t);
}
int main(){
	string s="banana";
	string t="ban";
	cout<<subsequenceCount(s,t);
	return 0;
}
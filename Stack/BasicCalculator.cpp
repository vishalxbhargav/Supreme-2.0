#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool isDigit(char c){
	if(c>='0'&&c<='9') return true;
	return false;
}
int basicCal(string& s){
	int sum=0,sign=1;
	stack<int>st;
	for(int i=0;i<s.size();i++){
		char ch=s[i];
		if(isDigit(ch)){
			int val=0;
			while(i<s.size()&&isDigit(s[i]-'0')){
				val=val*(s[i]-'0');
				i++;
			}
			i--;
			val=val*sign;
			sum+=val;
		}else if(ch=='('){
			st.push(sum);
			st.push(sign);
			sum=0;
			sign=1;
		}else if(ch==')'){
			sum*=st.top();
			st.pop();
			sum+=st.top();
			st.pop();
		}else if(ch=='-'){
			sign*=-1;
		}
	}
	return sum;
}
int main(){
	string s="(1+(4+5+2)-3)+(6+8)";
	cout<<"Ans : "<<basicCal(s);
	return 0;
}
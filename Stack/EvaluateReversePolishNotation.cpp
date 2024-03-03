#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int evalRPN(vector<string>& tokens){
	stack<int>stk;
	for(int i=0;i<tokens.size();i++){
		char ch=tokens[i][0];
		if(ch='+'||ch=='-'||ch=='*'||ch=='/'){
			int n1=stk.top();stk.pop();
			int n2=stk.top();stk.pop();
			if(ch=='+') stk.push(n1+n2);
			else if(ch=='-') stk.push(n1-n2);
			else if(ch=='*') stk.push(n1*n2);
			else if(ch=='/') stk.push(n1/n2);
		}else{
			stk.push(ch-'0');
		}
	}
	return stk.top();
}
int main(){
	vector<string> tokesn{"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
	cout<<"Ans : "<<evalRPN(tokesn);
	return 0;
}
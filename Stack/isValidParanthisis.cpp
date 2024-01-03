#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        char ch= s[i];
        if(ch=='('||ch=='{'||ch=='['){
            stk.emplace(ch);
        }else{
            if ((ch == ')' && stk.top() != '(')|| (ch == '}' && stk.top() != '{')|| (ch == ']' && stk.top() != '[')) {
                        return false;  // for a valid input, a close brackets must have an open brackets
            }else if(stk.empty()) return false;
            stk.pop();
        }
    }
    return true;
}
int main(){
    string str="({[{}]})";
    if(isValid(str)) cout<<"Paranthisis is Valid"<<endl;
    else cout<<"Invalid Paranthisi"<<endl;
    return 0;
}
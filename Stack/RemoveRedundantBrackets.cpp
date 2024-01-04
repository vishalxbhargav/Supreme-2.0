#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        char ch= s[i];
        if(ch=='('||ch=='*'||ch=='+'||ch=='-'||ch=='/'){
            stk.emplace(ch);
        }else if(ch==')'){
            int opcnt=0;
            while(!stk.empty()&&stk.top()!='('){
                opcnt++;
                stk.pop();
            }
            stk.pop();
            if(opcnt==0) return true;
        }
    }
    return false;
}
int main(){
    string str="((a+b)*(c))";
    if(isValid(str)) cout<<"redundent bracket present"<<endl;
    else cout<<"no Redundent bracket  Present"<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<string> subSequence(vector<string>&ans,string input,string op){
    if(!input.size()){
        ans.push_back(op);
        return ans;
    }
    string s1=op+input[0];
    string s2=op;
    input=input.substr(1,input.size()-1);
    subSequence(ans,input,s1);
    subSequence(ans,input,s2);
    return ans;
}
    
int main(){   
    string input="abc";
    string op="";
    vector<string>ans;
    subSequence(ans,input,op);
    for(auto s:ans)cout<<s<<" <-> ";
}
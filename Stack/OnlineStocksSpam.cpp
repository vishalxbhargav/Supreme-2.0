#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void stockSpam(vector<int>& v){
    vector<int>ans(v.size(),0);
    stack<int>stk;
    for(int i=0;i<v.size();i++){
        while (!stk.empty() && v[i] > v[stk.top()]) stk.pop();
        if (!stk.empty()) ans[i] = i-stk.top();
        else ans[i]=1;
        stk.push(i);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}
int main(){
    vector<int> ans={100,80,60,70,60,75,85};
    stockSpam(ans);
    
    return 0;
}
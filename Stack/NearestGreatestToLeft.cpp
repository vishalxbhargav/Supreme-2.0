#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void nextGreaterElement(vector<int>& v){
    vector<int>ans(v.size(),0);
    stack<int>stk;
    for(int i=0; i<v.size();i++){
        while (!stk.empty() && v[i] >= v[stk.top()]) stk.pop();
        if (!stk.empty()) ans[i] = v[stk.top()];
        else ans[i]=-1;
        stk.push(i);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}
int main(){
    vector<int> ans={6,2,4,2,1,5};
    nextGreaterElement(ans);
    
    return 0;
}
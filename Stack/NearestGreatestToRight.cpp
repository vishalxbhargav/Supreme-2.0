#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
void nextGreaterElement(vector<int>& v){
    vector<int>ans(v.size(),0);
    stack<int>stk;
    for(int i=v.size()-1;i>=0;i--){
        while (!stk.empty() && v[i] >= v[stk.top()]) stk.pop();
        if (!stk.empty()) ans[i] = v[stk.top()];
        else ans[i]=-1;
        stk.push(i);
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<" ";
    }
}
int main(){
    vector<int> ans={1,3,2,4};
    nextGreaterElement(ans);
    
    return 0;
}
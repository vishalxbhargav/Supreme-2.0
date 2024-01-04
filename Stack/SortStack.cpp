#include<iostream>
#include<stack>
using namespace std;
void insertInSortedStack(stack<int>& st,int &n){
     if (st.empty()||st.top()<=n) {
        st.emplace(n);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertInSortedStack(st,n);
    st.push(topElement);
}
void solve(stack<int>& st){
    if (st.empty()) {
        return;
    }
    int topElement = st.top();
    st.pop();
    solve(st);
    insertInSortedStack(st,topElement);
}
int main(){
    stack<int> st;
    st.emplace(100);
    st.emplace(15);
    st.emplace(30);
    int n=20;
    solve(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;

}
#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st,int &n){
     if (st.empty()) {
        st.emplace(n);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtBottom(st,n);
    st.push(topElement);
}
int main(){
    stack<int> st;
    st.emplace(10);
    st.emplace(33);
    st.emplace(47);
    st.emplace(25);
    st.emplace(37);
    st.emplace(43);
    int n=20;
    insertAtBottom(st,n);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;

}
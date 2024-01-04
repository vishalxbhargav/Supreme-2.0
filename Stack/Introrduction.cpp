#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.emplace(30);
    // cout<<st.top();
    st.pop();
    cout<<st.top();
    return 0;
}
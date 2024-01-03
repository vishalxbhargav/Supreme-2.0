#include<iostream>
#include<stack>
using namespace std;
int solve(stack<int>& st,int pos){
     if (pos==1) {
        return st.top();
    }
    int topElement = st.top();
    st.pop();
    return solve(st,pos-1);
    st.push(topElement);
}
int midOfStack(stack<int> st){
    int size=st.size();
    int ans=-1;
    if(size&1){
        int pos=size/2+1;
        ans=solve(st,pos);
    }else{
        int pos=size/2;
        ans=solve(st,pos);
    }
    return ans;
}
int main(){
    stack<int> st;
    st.emplace(10);
    st.emplace(33);
    st.emplace(47);
    st.emplace(25);
    st.emplace(37);
    st.emplace(43);
    cout<<"Mid element : "<<midOfStack(st)<<endl;
    return 0;

}
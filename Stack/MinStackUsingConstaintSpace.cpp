#include<iostream>
#include<stack>
using namespace std;
class Stack{
    stack<int>st;
    public:
    int minElement=-1;
    int getMin(){
        return minElement;
    }
    void push(int n){
       if(st.size()==0){
        st.push(n);
        minElement=n;
       }else{
        if(n>=minElement){
            st.push(n);
        }else if(n<minElement){
            st.push(2*n-minElement);
            minElement=n;
        }
       }
    }
    void pop(){
        if(st.size()==0){
            cout<<"Stack is empty";
            return;
        } 
        else{
            if(st.top()>=minElement) st.pop();
            else{
                minElement=2*minElement-st.top();
                st.pop();
            }
        }
    }
    bool isEmpty(){
        if(st.size()==0) return true;
        return false;
    }
    int getTop(){
        if(st.size()==0) return -1;
        else{
            if(st.top()<minElement) return minElement;
            return st.top();
        }
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(5);
    st.pop();
    cout<<st.getMin();
    return 0;
}
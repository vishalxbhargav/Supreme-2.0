#include<iostream>
using namespace std;
int stack[10];
int tp=-1;
void push(int n){
    if(tp==9){
        cout<<"Overflow Condition";
        return ;
    }
    stack[++tp]=n;
}
int  pop(){
    if(tp==-1){
        cout<<"Underflow Conditon";
        return -1;
    }
    return stack[tp--];
}
int top(){
    if(tp==-1) return -1;
    return stack[tp];
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    cout<<top();
}
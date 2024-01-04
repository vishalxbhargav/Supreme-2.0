#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    Stack(int n){
        arr = new int [n];
        this->size=n;
        this->top1=-1;
        this->top2=size;
    }
    void push1(int n){
        if(top2-top1==1){
            cout<<"Stack Overflow "<<endl;
            return;
        }
        arr[++top1]=n;
        return;
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        arr[top1]=0;
        top1--;
        return;
    }
    bool isEmpty(){
        if(top1==-1&&top2==size) return true;
        return false;
    }
    int getTop1(){
        if(isEmpty()) cout<<"Stack isEmpty"<<endl;
        return arr[top1];
    } void push2(int n){
        if(top2-top1==1){
            cout<<"Stack Overflow "<<endl;
            return;
        }
        arr[--top2]=n;
        return;
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        arr[top2]=0;
        top2++;
        return;
    }
    int getTop2(){
        if(top2==size) cout<<"Stack2 isEmpty"<<endl;
        return arr[top2];
    }
    void printStack(){
        cout<<"top1 : "<<top1<<endl;
        cout<<"top2 : "<<top2<<endl;
        cout<<"Stack : ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Stack st(10); 
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(80);
    st.push2(180);
    st.push2(203);
    st.push2(330);
    st.push2(102);
    st.push2(99);
    st.push1(22);
    st.push1(30);
    st.printStack();
   
}
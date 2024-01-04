#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int top;
    int size;
    public:
    Stack(int n){
        arr=new int [n];
        this->size=size;
        this->top=-1;
    }
    void push(int n){
        if(top==size-1){
            cout<<"Stack Overflow ";
            return;
        }
        arr[++top]=n;
        return;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow";
            return;
        }
        top--;
        return;
    }
    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }
    int getTop(){
        if(isEmpty()) cout<<"Stack isEmpty";
        return arr[top];
    }
};
#include<iostream>
using namespace std;
//here true represent odd and false for even
bool oddEven(int n){
    if(n&1) return false;
    return true;
}
int main(){
    if(oddEven(5)) cout<<"even";
    else cout<<"odd";
    return 0;
}
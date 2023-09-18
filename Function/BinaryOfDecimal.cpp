#include<iostream>
using namespace std;
void decimalToBinary(int n){
    while(n!=0){
        if(n&1) cout<<"1 ";
        else cout<<"0 ";
        n>>=1;
    }
}
int main(){
    decimalToBinary(19);
    return 0;
}
#include<iostream>
using namespace std;
int countBits(int n){
    int cnt=0;
    while(n!=0){    
        cnt+=n&1; 
        n>>=1;
    }
    return cnt;
}
int main(){
    cout<<"bit true in "<<15<<" is "<<countBits(15);
    return 0;
}
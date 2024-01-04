#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i<n/2;i++) if(n%i==0) return false;
    return true;
}
void printPrime(int n){
    for(int i=1;i<n+1;i++){
        if(isPrime(i)) cout<<i<<" ";
    }
}
int main(){
    printPrime(100);
}
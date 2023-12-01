#include<bits/stdc++.h>
using namespace std;
int pow(int n){
    return (n==0)?1:2*pow(n-1);
}
int main(){
    cout<<" 2^5 : "<<pow(5);
}
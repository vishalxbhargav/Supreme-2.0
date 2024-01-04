#include<bits/stdc++.h>
void count(int n){
    if(n==0) return;
    std::cout<<" "<<n;
    count(n-1);
}
int main(){
    count(10);
    return 0;
}
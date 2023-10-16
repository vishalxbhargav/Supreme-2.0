#include<bits/stdc++.h>
void solve(int n){
    if(n==0) return;
    std::cout<<"Recurion call for "<<n<<"\n";
    solve(n-1);
}
int main(){
    solve(10);
    return 0;
}
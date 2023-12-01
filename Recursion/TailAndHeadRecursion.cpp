#include<bits/stdc++.h>
void tailRecursion(int n){
    if(n==0) return;
    std::cout<<"Tail Recurion call for "<<n<<"\n";
    tailRecursion(n-1);//tail recurion
}
void headRecurion(int n){
    if(n==0) return;
    headRecurion(n-1);//head recurion
    std::cout<<"Head Recurion call for "<<n<<"\n";
}
int main(){
    headRecurion(10);
    tailRecursion(10);
    return 0;
}
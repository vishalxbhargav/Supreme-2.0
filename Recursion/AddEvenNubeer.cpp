#include<iostream>
using namespace std;
void solve(int nums[],int n,int i){
    if(i==n) return;
    nums[i]=nums[i]*2;
    solve(nums,n,i+1);
}
int main(){
    int a[]={1,2,3,4,5};
    solve(a,5,0);
    for(auto i:a) cout<<" "<<i;
}
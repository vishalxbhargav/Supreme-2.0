#include<iostream>
using namespace std;
void solve(int nums[],int &max,int n,int i){
    if(i==n) return;
    if(nums[i]>max) max=nums[i];
    solve(nums,max,n,i+1);
}
int main(){
    int a[]={1,2,3,4,5};
    int max=a[0];
    solve(a,max,5,0);
    // for(auto i:a) cout<<" "<<i;
    cout<<" result : "<<max;
}
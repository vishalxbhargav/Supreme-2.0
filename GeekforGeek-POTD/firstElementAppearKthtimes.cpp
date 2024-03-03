#include<iostream>
#include<map> 
#include<vector>
using namespace std;
int  firstElement(vector<int>& nums,int k){
    map<int,int>mp;
    for(auto i:nums) mp[i]++;
    for(auto i:mp) cout<<i.first<<" : "<<i.second<<endl;
    for(auto i:mp){
        if(i.second>=k) return i.first;
    }
    return -1;
}
int main(){
    vector<int>nums={3 ,1, 3, 4, 5, 1, 3, 3, 5, 4};
    int k=3;
    cout<<firstElement(nums,k);
    return 0;
}
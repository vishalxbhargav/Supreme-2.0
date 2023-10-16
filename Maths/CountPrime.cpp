#include<bits/stdc++.h>
using namespace std;
int bs(vector<int>&nums,int s,int target){
    int e=nums.size();
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) s=mid+1;
        else e=mid-1;
    }
    return -1;
}
vector<vector<int>> pairOFPrime(int n){
    vector<bool>sieve(n+1,true);
        vector<int>ans;
        sieve[0]=sieve[1]=false;
        for(int i=2;i<=n;i++){
            if(sieve[i]){
                ans.push_back(i);
                int j=i*i;
                while(j<=n){
                    sieve[j]=false;
                    j+=i;
                }
            }
        }
    vector<vector<int>> result;
    vector<int>temp;
    for(int i=0;i<ans.size();i++){
        if(bs(ans,i,n-ans[i])!=-1){
            temp.push_back(ans[i]);
            temp.push_back(n-ans[i]);
            cout<<ans[i]<<" "<<n-ans[i]<<endl;
        }
        result.push_back(temp);
    }
    return result;
}

int  main(){
    cout<<"result : "<<pairOFPrime(10).size()<<endl;
   
    return 0;
}

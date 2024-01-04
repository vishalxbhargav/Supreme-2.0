#include<iostream>
#include<vector>
using namespace std;
int waterRainTrapping(vector<int>& arr){
    vector<int>mxr(arr.size(),0),mxl(arr.size(),0);
    mxr[0]=arr[0];
    mxl[arr.size()-1]=arr[arr.size()-1];
    for(int i=1;i<arr.size();i++){  
        mxr[i]=max(mxr[i-1],arr[i]);
    }
    for(int i=arr.size()-2;i>=0;i--){
        mxl[i]=max(mxr[i+1],arr[i]);
    }
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans+=min(mxr[i],mxl[i])-arr[i];
    }
    return ans;
}
int main(){
    vector<int> ans={3,0,0,2,0,4};
    cout<<"ans : "<<waterRainTrapping(ans);
}
#include<iostream>
#include<vector>
using namespace std;
int lastOccurence(vector<int>& nums,int n){
    int s=0,e=nums.size()-1,ans=-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]==n) {
            s=mid+1;
            ans=mid;
        }
        else if(nums[mid]<n) s=mid+1;
        else e=mid-1;
    }
    return ans;
}
int firstOccurence(vector<int>& nums,int n){
    int s=0,e=nums.size()-1,ans=-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(nums[mid]==n) {
            e=mid-1;
            ans=mid;
        }
        else if(nums[mid]<n) s=mid+1;
        else e=mid-1;
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,7,7,7,7,7,7,7,7,7,8,9,12,28,49};
    cout<<" First Occurence of Element  7 : "<<firstOccurence(nums,7)<<endl;
    cout<<" Last Occurence of Element  7 : "<<lastOccurence(nums,7)<<endl;
}
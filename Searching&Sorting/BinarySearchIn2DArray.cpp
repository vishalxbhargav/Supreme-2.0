#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<vector<int>>& arr,int target){
    int col=arr[0].size();
    int s = 0, e = arr.size() * col - 1; 
    while (s <= e){
        int mid = s + (e - s) / 2;
        if (arr[mid/col][mid%col] == target)
        return mid;
    
        if (arr[mid/col][mid%col] < target)
        s = mid + 1;
        else
        e = mid - 1;
  }
 
  return -1;
}
int main(){
    vector<vector<int>> nums={{1,2,3,4},{5,6,7,8},{9,12,28,49},{51,53,60,69}};
    // cout<<nums.size()*nums[0].size();
    cout<<" Search Element for 9 :\n index : "<<binarySearch(nums,9);
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string largestNumber(vector<string>& arr,int n){
    string ans="";
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--) ans+=arr[i];
    return ans;
}
int main(){
    vector<string> arr= {"3", "30", "34", "5", "9"};
    cout<<largestNumber(arr,5);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

static bool mycom(string a,string b){
    string s1=a+b;
    string s2=b+a;
    return s1>s2;
}
string largestNumber(vector<int>nums){
    vector<string>snums;
    for(auto x:nums){
        snums.push_back(to_string(x));
    }
    sort(snums.begin(),snums.end(),mycom);
    string ans="";
    for(auto x:snums){
        ans+=x;
    }
    return ans;
}
int main(){
    vector<int>nums={1,30,3,4,6,17,4,8,8,9};
    cout<<"result : "<<largestNumber(nums);
    return 0;
}


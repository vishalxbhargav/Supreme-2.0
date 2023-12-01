#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupOfAnangram(vector<string>strs){
    map<string,vector<string>>mp;
    for(auto str:strs){
        string s=str;
        sort(s.begin(),s.end());
        mp[s].push_back(str);
    }
    vector<vector<string>>ans;
    for(auto it=mp.begin();it!=mp.end();it++) ans.push_back(it->second);
    return ans;
}
int main(){
    vector<string>strs={"eat","tea","tan","bat","nat","ate"};
    vector<vector<string>>v=groupOfAnangram(strs);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
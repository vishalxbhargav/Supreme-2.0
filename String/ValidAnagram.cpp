#include<bits/stdc++.h>
using namespace std;
bool isValidAnagram(string s,string t){
    vector<int>ans(26,-1);
    for(int i=0;i<s.length();i++){
        ans[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++){
        ans[t[i]-'a']--;
        if(ans[t[i]-'a']<-1) return false;
    }
    return true;
}
int main(){
    string s="ramayan";
    string t="yaknaar";
    cout<<" valid Anagram : "<<isValidAnagram(s,t);
}
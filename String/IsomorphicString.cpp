#include<bits/stdc++.h>
using namespace std;
bool isomorphicString(string s,string t){
    int hash[256]={0};
    bool istCharsMapped[256]={0};
    for(int i=0;i<s.size();i++){
        if(hash[s[i]]==0&&istCharsMapped[i]==0){
            hash[s[i]]=t[i];
            istCharsMapped[t[i]]=true;
        }
    }
    for(int i=0;i<s.size();i++){
        if((char)hash[s[i]]!=t[i]) return false;
    }
    return true;
}
int main(){
    string s="babc";
    string t="bada";
    cout<<isomorphicString(s,t);
    return 0;
}
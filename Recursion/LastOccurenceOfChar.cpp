#include<iostream>
#include<vector>
using namespace std;
using namespace std;
void  lastOccur(string s,char ch,int i,int& ans){
    if(i>=s.size()) return;
    if(ch==s[i]) ans=i;
    lastOccur(s,ch,i+1,ans);
    return;
}
int main(){
    int ans=0;
    string s="qabcdefgaadaadkldjgkfakddkkabkeioreiu";
    lastOccur(s,'q',0,ans);
    cout<<ans;
}

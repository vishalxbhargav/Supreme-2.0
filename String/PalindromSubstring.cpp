//Palindromic substring of a string
#include<bits/stdc++.h>
using namespace std;
int expend(string s,int i,int j){
    int cnt=0;
    while(i >= 0 && j < s.length() && s[i] == s[j] ){
        cnt++;i--;j++;
    }
    return cnt;
}
int  palindromSubSting(string str){
    int ans=0;
    for(int i=0;i<str.length();i++){
        ans+=expend(str,i,i)+expend(str,i,i+1);
    }
    return ans;
}
int main(){
    string s="abcdaadc";
    cout<<"Palindromic Substring : "<<palindromSubSting(s);
    return 0;
}
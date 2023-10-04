#include<bits/stdc++.h>
using namespace std;
string stringCompression(string s){
    string ans="";
    int i=0,cnt=1;
    while(i<s.length()){
        char c=s[i];
        while(s[i]==s[i+1]){
           cnt++;i++; 
        } 
        ans.push_back(c);
        if(cnt>1) ans.push_back('0'+cnt);
        i++;
        cnt=1;
    }
    return ans;
}
int main(){
    cout<<"result : "<<stringCompression("aaaabcccdddefgggh");
    return 0;
}


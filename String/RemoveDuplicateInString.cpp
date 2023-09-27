//remove last occurence of character

//intusion sort element or use hashmap
#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string& str){
    string ans="";
    int idx=0;
    while(idx<str.length()){
        if(str.length()>0&ans[ans.length()-1]==str[idx]) ans.pop_back();
        else ans.push_back(str[idx]);
        idx++;
    }
    return ans;
}
int main(){
    string s="azxxzy";
    cout<<"After Remove duplicate : "<<removeDuplicate(s);
    return 0;
}
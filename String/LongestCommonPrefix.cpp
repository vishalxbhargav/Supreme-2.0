#include<bits/stdc++.h>
using namespace std;
string commonPrefix(vector<string>str){
    string ans="";
    int i=0;
    while(true){
        char ch_char=0;
        for(auto s:str){
            if(i>=s.length()){
                ch_char=0;
                break;
            }
            if(ch_char==0){
                ch_char=s[i];
                break;
            }else if(ch_char!=s[i]){
                ch_char=0;
                break;
            }
        }
        if(ch_char==0) break;
        ans.push_back(ch_char);
        cout<<ch_char<<endl;
        i++;
    }
    return ans;
}
int main(){
    vector<string> str={"flower","flight","floor","fly"};
    cout<<"ans : "<<commonPrefix(str);
    return 0;
}